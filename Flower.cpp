#include "Flower.hpp"

void Flower::setType(typeIris iris) {
    type = iris;
}
typeIris Flower::getTypeOfIris() {
    return type;
}
NPoint Flower::getPoint() {
    return character;
}
//מקווה שלא יתפוצץ
Flower::Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength, typeIris type)
    :character(sepalWidth, sepalLength, petalWidth, petalLength)
{
    this->type = type;
}
Flower::Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength)
        :character(sepalWidth, sepalLength, petalWidth, petalLength)
{
    type = undifined;
}