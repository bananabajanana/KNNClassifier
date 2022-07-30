#include <vector>

#include "source/srcKnnClassifier/Flower.hpp"
#include "source/srcIO/FileConverter.hpp"
#include "source/srcDistances/DistanceCalc.hpp"
#include "source/srcKnnClassifier/Classifier.hpp"
#include "source/srcDistances/DistancesData.hpp"

// TODO:
//  * Find out how to run finalized version from console for readme Installation+Usage.
//  * Simplify and clean code
//
// Maybe One Day:
//  * making the classifier class more generic (maybe instead of working with flower specifically, should work with a "classifiable" interface? i mean, everything with a point and classes should work)

int main(int argc, char* argv[]) {
    //loading input files and k
    FileConverter fc;
    std::vector<Flower> classified = fc.updateFromFile("../input/classified.csv");
    std::vector<Flower> unclassified = fc.updateFromFile("../input/Unclassified.csv");
    int k = atoi(argv[0]);

    Classifier machine(k, classified);
    std::vector<DistanceCalc *> calculators = DistancesData::getAllTypes();

    for (DistanceCalc* calculator : calculators) {
        //classifying unclassified input
        std::vector<Flower> output = unclassified;
        machine.defFlowers(output, *calculator);
        fc.setContent(output);

        //outputting to relative
        std::string path = calculator->fileName();
        fc.updateToFile(path);
    }
}
