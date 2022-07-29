#include "nPoint.hpp"

Properties::Properties(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
        : Point({sepalWidth, sepalLength, petalWidth, petalLength}), n(4)
{
}
Properties::Properties(double* properties, int n)
    :n(n), Point(makePoint(properties,n))
{
}

const std::vector<double> Properties::getPoint() {
    return Point;
}

 std::vector<double> Properties::makePoint(double* properties, int n){
    std::vector<double> temp;
    for(int i=0;i<n;i++) {
        temp.push_back(properties[i]);
    }
    return temp;
}

const int Properties::getN() {
    return n;
}

