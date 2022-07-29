#include "FourDPoint.hpp"

FourDPoint::FourDPoint(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
        : Point({sepalWidth, sepalLength, petalWidth, petalLength}), n(4)
{
}
FourDPoint::FourDPoint(double* properties, int n)
    :n(n), Point(makePoint(properties,n))
{
}

const std::vector<double> FourDPoint::getPoint() {
    return Point;
}

 std::vector<double> FourDPoint::makePoint(double* properties, int n){
    std::vector<double> temp;
    for(int i=0;i<n;i++) {
        temp.push_back(properties[i]);
    }
    return temp;
}

const int FourDPoint::getN() {
    return n;
}

