#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED

#include <string>
#include <vector>
#include <cmath>
#include "FourDPoint.hpp"

class DistanceCalc {
    private:
        const std::string FILE_NAME;
    public:

        /**
         * Calculate the distance between two points using different systems.
         * @param p1 - point 1.
         * @param p2  - point 2.
         * @return the distance.
         */
        virtual double dist(FourDPoint p1, FourDPoint p2) = 0;

        /**
         * The file name of the using system.
         * @return the file name.
         */
        std::string fileName();
};
#endif