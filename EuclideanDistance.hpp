#ifndef EUCLIDEAND_H_INCLUDED
#define EUCLIDEAND_H_INCLUDED

#include "DistanceCalc.hpp"

class EuclideanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(Properties p1, Properties p2) override;
    EuclideanDistance();
};

#endif