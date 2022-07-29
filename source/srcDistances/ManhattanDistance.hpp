#ifndef MANHATTAND_H_DEFITIONS
#define MANHATTAND_H_DEFITIONS
#include "DistanceCalc.hpp"

/**
 * Responsible on the function of the project used Manhattan distance.
 */
class ManhattanDistance : public DistanceCalc {
public:
    /**
     *  override
     **/
    double dist(NPoint p1, NPoint p2) override;

    /**
     * Changes the file name
     */
    ManhattanDistance();
};

#endif