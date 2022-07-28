#include "Point.hpp"

Point::Point(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
    : sepalWidth(sepalWidth), sepalLength(sepalLength), petalWidth(petalWidth),petalLength(petalLength)
{
}

double Point::getX() {
    return petalLength;
}
double Point::getY() {
    return petalWidth;
}
double Point::getZ() {
    return sepalLength;
}
double Point::getW() {
    return sepalWidth;
}
