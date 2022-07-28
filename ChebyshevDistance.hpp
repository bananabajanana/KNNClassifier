#include "DistanceCalc.hpp"

class ChebyshevDistance : public DistanceCalc {
    private:
        const std::string FILE_NAME = "chebyshev_output.csv";
    public:
    /**
     *  override
     **/
    double dist(Point p1, Point p2);
};
