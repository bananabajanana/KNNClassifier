#include "ChebyshevDistance.hpp"

double ChebyshevDistance::dist(NPoint p1, NPoint p2) {
    if(p1.getN() != p2.getN()) {
        exit(1);
    }
    double sum = fabs(p1.getPoint()[0] - p2.getPoint()[0]);
    for(int i=1; i<p1.getN();i++) {
        sum = fmax(fabs(p1.getPoint()[i] - p2.getPoint()[i]), sum);
    }
    return sum;
}
ChebyshevDistance::ChebyshevDistance() {
    this->FILE_NAME = "../output/chebyshev_output.csv";
}