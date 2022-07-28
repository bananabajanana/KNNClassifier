#include "FourDPoint.hpp"

FourDPoint::FourDPoint(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
    : sepalWidth(sepalWidth), sepalLength(sepalLength), petalWidth(petalWidth),petalLength(petalLength)
{
}

double FourDPoint::getX() const  {
    return petalLength;
}
double FourDPoint::getY() const {
    return petalWidth;
}
double FourDPoint::getZ() const {
    return sepalLength;
}
double FourDPoint::getW() const {
    return sepalWidth;
}
