#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED

#include <string>
#include <vector>
#include <cmath>
#include "source/srcKnnClassifier/NPoint.hpp"

class DistanceCalc {
protected:
        std::string FILE_NAME;
public:

    /**
     * Calculate the distance between two points.
     * @param p1 - point 1.
     * @param p2  - point 2.
     * @return the distance.
     */
    virtual double dist(NPoint p1, NPoint p2) = 0;

    /**
     * @return the file name output for the current distance function.
     */
    std::string fileName();
};
#endif