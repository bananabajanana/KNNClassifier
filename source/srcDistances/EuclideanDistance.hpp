#ifndef EUCLIDEAND_H_INCLUDED
#define EUCLIDEAND_H_INCLUDED

#include "DistanceCalc.hpp"
/**
 * Responsible on the function of the project used Euclidean distance.
 */
class EuclideanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(NPoint p1, NPoint p2) override;
    EuclideanDistance();
};

#endif