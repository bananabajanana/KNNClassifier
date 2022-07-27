#include <string>
#include <vector>
#include "Point.hpp"

class DistanceCalc {
    private:
        const std::string FILE_NAME = 0;
    public:
        virtual int dist(Point p1, Point p2) = 0;
        string fileName();
        static std::vector<DistanceCalc> getAllTypes();
};