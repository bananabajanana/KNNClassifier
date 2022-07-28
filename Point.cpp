#include "Point.hpp"

Point::Point(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
    : sepalWidth(sepalWidth), sepalLength(sepalLength), petalWidth(petalWidth),petalLength(petalLength)
{
}

double Point::getX() const  {
    return petalLength;
}
double Point::getY() const {
    return petalWidth;
}
double Point::getZ() const {
    return sepalLength;
}
double Point::getW() const {
    return sepalWidth;
}
