#include "DistancesData.hpp"

std::vector<DistanceCalc*>& DistancesData::getAllTypes() {
    std::vector<DistanceCalc*> *allTypes = new std::vector<DistanceCalc*>();
    allTypes->push_back((DistanceCalc *)new EuclideanDistance);
    allTypes->push_back((DistanceCalc *)new ManhattanDistance);
    allTypes->push_back((DistanceCalc *)new ChebyshevDistance);
    return *allTypes;
}