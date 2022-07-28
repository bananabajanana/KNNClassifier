#include <string>
#include <vector>
#include <cmath>
#include "Point.hpp"

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
        virtual double dist(Point p1, Point p2) = 0;

        /**
         * The file name of the using system.
         * @return the file name.
         */
        std::string fileName();

        /**
         * All the types we use to measure.
         * @return all the types that can be used.
         */
        static std::vector<DistanceCalc*>& getAllTypes();
};