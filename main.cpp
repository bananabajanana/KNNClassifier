#include <vector>

#include "Flower.hpp"
#include "FileConverter.hpp"
#include "DistanceCalc.hpp"
#include "Classifier.hpp"
#include "DistancesData.hpp"

// TODO:
//  * Change absolute paths to relative path in main and distance classes
//  * Simplify and clean code
//  * Add comments
//  * Get rid of c content (only cpp should be left)
//  * Finish readme

int main(int argc, char*argv[]) {
    FileConverter fc;
    std::vector<Flower> classified = fc.updateFromFile("C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\classified.csv");
    std::vector<Flower> unclassified = fc.updateFromFile("C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\Unclassified.csv");
    int k = atoi(argv[0]);

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
