#include "DistanceCalc.hpp"
#include "ManhattanDistance.hpp"
#include "EuclideanDistance.hpp"
#include "ChebyshevDistance.hpp"
#include <vector>

std::string DistanceCalc::fileName() {
    return FILE_NAME;
}

std::vector <DistanceCalc> DistanceCalc::getAllTypes() {
     std::vector<DistanceCalc> *allTypes = new std::vector<DistanceCalc>();
     allTypes->push_back(new EuclideanDistance);
     allTypes->push_back(new ManhattanDistance);
     allTypes->push_back(new ChebyshevDistance);
    return allTypes;
}