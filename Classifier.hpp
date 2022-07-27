#include <iostream>
#include <vector>
#include "Flower.hpp"
#include "Distance.hpp"
class Classifier {
private:
    const int k;
    std::vector<Flower> classified;
    void defFlower(Flower& f, typeOfDistance typeDis);
    int Classifier::whereMinInArr(std::vector<double>& distances);
public:
    void defFlowers(std::vector<Flower>& unclassified, typeOfDistance typeDis);
};