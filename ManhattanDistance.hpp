#ifndef MANHATTAND_H_DEFITIONS
#define MANHATTAND_H_DEFITIONS

#include "DistanceCalc.hpp"

class ManhattanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2) override;
    ManhattanDistance();
};

#endif