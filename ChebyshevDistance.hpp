#ifndef CHEBYSHEV_H_INCLUDED
#define CHEBYSHEV_H_INCLUDED

#include "DistanceCalc.hpp"

class ChebyshevDistance : public DistanceCalc {
    public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2);
    ChebyshevDistance();
};

#endif