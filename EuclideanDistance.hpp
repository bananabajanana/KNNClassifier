#ifndef EUCLIDEAND_H_INCLUDED
#define EUCLIDEAND_H_INCLUDED

#include "DistanceCalc.hpp"

class EuclideanDistance : public DistanceCalc {
private:
    const std::string FILE_NAME = "source/output/euclidean_output.csv";
public:
    /**
     *  override
     **/
    double dist(FourDPoint p1, FourDPoint p2) override;
};

#endif