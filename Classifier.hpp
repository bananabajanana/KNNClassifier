#include <iostream>
#include <vector>
#include "Flower.hpp"
class Classifier {
private:
    const int k;
    std::vector<Flower> classified;
    std::vector<Flower> unclassified;
public:
    double getX();
    double getY();
    double getZ();
    double getW();

};