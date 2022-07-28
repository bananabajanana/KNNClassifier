#ifndef EUCLIDEAND_H_INCLUDED
#define EUCLIDEAND_H_INCLUDED

#include "DistanceCalc.hpp"

class EuclideanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2) override;
    EuclideanDistance();
};

#endif