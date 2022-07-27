#include <iostream>
#include <vector>
#include "Flower.hpp"
#include "Distance.hpp"
class Classifier {
private:
    const int k;
    std::vector<Flower> classified;
    typeIris defFlower(Flower f);
public:
    std::vector<Flower> defFlowers(std::vector<Flower>& unclassified, typeOfDistance typeDis);
};