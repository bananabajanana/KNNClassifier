#include "Flower.hpp"

void Flower::setType(typeIris iris) {
    this.type = iris;
}
typeIris Flower::getTypeOfIris() {
    return type;
}
Point Flower::getPoint() {
    return character;
}
Flower::Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength, typeIris type)
    :character((sepalWidth, sepalLength, petalWidth, petalLength))
{
    this->type = type;
}