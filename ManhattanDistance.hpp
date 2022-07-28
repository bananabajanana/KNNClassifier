#include "DistanceCalc.hpp"

class ManhattanDistance : public DistanceCalc {
private:
    const std::string FILE_NAME = "manhattan_output.csv";
public:
    int dist(Point p1, Point p2);
};
