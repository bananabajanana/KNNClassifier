#include "ManhattanDistance.hpp"

double ManhattanDistance::dist(NPoint p1, NPoint p2) {
    //points have to be of equal coordinate systems.
    if(p1.getN() != p2.getN()) {
        exit(1);
    }
    double sum = 0;
    for(int i=0; i<p1.getN();i++) {
        sum+= fabs(p1.getPoint()[i] - p2.getPoint()[i]);
    }
    return sum;
}

ManhattanDistance::ManhattanDistance() {
    this->FILE_NAME = "../output/manhattan_output.csv";
}