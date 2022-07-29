#ifndef MANHATTAND_H_DEFITIONS
#define MANHATTAND_H_DEFITIONS

#include "DistanceCalc.hpp"

class ManhattanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(Properties p1, Properties p2) override;
    ManhattanDistance();
};

#endif