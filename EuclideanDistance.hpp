#include "DistanceCalc.hpp"

class EuclideanDistance : public DistanceCalc {
private:
    const std::string FILE_NAME = "euclidean_output.csv";
public:
    /**
     *  override
     **/
    double dist(Point p1, Point p2) override;
};
