#include <iostream>
#include <vector>
#include "Flower.hpp"
#include "Distance.hpp"
class Classifier {
private:
    const int k;
    std::vector<Flower> classified;
    std::vector<Flower> unclassified;
public:
    std::vector<Flower> defFlowers(std::vector<Flower> classified, std::vector<Flower>& unclassified, typeOfDistance typeDis);
    typeIris defFlower(Flower f, std::vector<Flower> classified);
};