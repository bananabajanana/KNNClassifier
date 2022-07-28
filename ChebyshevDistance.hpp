#ifndef CHEBYSHEV_H_INCLUDED
#define CHEBYSHEV_H_INCLUDED

#include "DistanceCalc.hpp"

class ChebyshevDistance : public DistanceCalc {
    private:
        const std::string FILE_NAME = "source/output/chebyshev_output.csv";
    public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2);
};

#endif