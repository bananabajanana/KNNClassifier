#include <iostream>
#include <vector>

#include "Flower.hpp"
#include "FileConverter.hpp"
#include "DistanceCalc.hpp"
#include "Classifier.hpp"
#include "DistancesData.hpp"

int main(int argc, char*argv[]) {
    FileConverter fc;
    std::vector<Flower> classified = fc.updateFromFile("source/classified.csv");
    std::vector<Flower> unclassified = fc.updateFromFile("source/Unclassified.csv");
    int k = atoi(argv[0]);

    Classifier machine(k, classified);
    std::vector<DistanceCalc *> calculators = DistancesData::getAllTypes();

    for (DistanceCalc* calculator : calculators) {
        std::vector<Flower> output = unclassified;
        machine.defFlowers(output, *calculator);
        fc.setContent(output);
        fc.updateToFile(calculator->fileName());
    }
}
