#ifndef EUCLIDEAND_H_INCLUDED
#define EUCLIDEAND_H_INCLUDED

#include "DistanceCalc.hpp"

class EuclideanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(NPoint p1, NPoint p2) override;
    EuclideanDistance();
};

#endif