#ifndef MANHATTAND_H_DEFITIONS
#define MANHATTAND_H_DEFITIONS

#include "DistanceCalc.hpp"

class ManhattanDistance : public DistanceCalc {
private:
    const std::string FILE_NAME = "source/output/manhattan_output.csv";
public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2) override;
};

#endif