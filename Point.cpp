#include "Point.hpp"

Point::Point(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
    :this->sepalWidth(sepalWidth), this->sepalLength(sepalLength), this->petalWidth(petalWidth), this->petalLength(petalLength)
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
