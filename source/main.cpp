#include <vector>

#include "source/srcKnnClassifier/Flower.hpp"
#include "source/srcIO/FileConverter.hpp"
#include "source/srcDistances/DistanceCalc.hpp"
#include "source/srcKnnClassifier/Classifier.hpp"
#include "source/srcDistances/DistancesData.hpp"

// TODO:
//  * Change absolute paths to relative path in main and distance classes
//  * Simplify and clean code
//  * Add comments
//  * Get rid of c content (only cpp should be left)
//  Additional things i need to discuss with you Michali :)
//    * making the classifier class more generic (maybe instead of working with flower specifically, should work with a "classifiable" interface? i mean, everything with a point and classes should work)

int main(int argc, char* argv[]) {
    FileConverter fc;
    std::vector<Flower> classified = fc.updateFromFile("C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\input\\classified.csv");
    std::vector<Flower> unclassified = fc.updateFromFile("C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\input\\Unclassified.csv");
    int k = 3/*atoi(argv[0])*/;

    Classifier machine(k, classified);
    std::vector<DistanceCalc *> calculators = DistancesData::getAllTypes();

    for (DistanceCalc* calculator : calculators) {
        std::vector<Flower> output = unclassified;
        machine.defFlowers(output, *calculator);
        fc.setContent(output);
        std::string path = calculator->fileName();
        fc.updateToFile(path);
    }
}
