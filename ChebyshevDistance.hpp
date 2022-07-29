#ifndef CHEBYSHEV_H_INCLUDED
#define CHEBYSHEV_H_INCLUDED

#include "DistanceCalc.hpp"

class ChebyshevDistance : public DistanceCalc {
    public:
    /**
     *  override
     **/
    double dist(NPoint p1, NPoint p2);
    ChebyshevDistance();
};

#endif