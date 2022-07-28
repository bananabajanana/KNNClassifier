#ifndef KNNCLASSIFIER_DISTANCESDATA_HPP
#define KNNCLASSIFIER_DISTANCESDATA_HPP

#include "DistanceCalc.hpp"
#include "ChebyshevDistance.hpp"
#include "ManhattanDistance.hpp"
#include "EuclideanDistance.hpp"
#include "vector"

class DistancesData {
public:
    /**
         * All the types we use to measure.
         * @return all the types that can be used.
         */
    static std::vector<DistanceCalc*>& getAllTypes();
};


#endif //KNNCLASSIFIER_DISTANCESDATA_HPP
