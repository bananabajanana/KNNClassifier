#include <iostream>
#include <vector>
#include <cmath>
#include "Flower.hpp"
#include "DistanceCalc.hpp"
class Classifier {
private:
    const int k;
    std::vector<Flower> classified;
    void defFlower(Flower& f, DistanceCalc typeDis);
    int whereMinInArr(std::vector<double>& distances);
public:
    void defFlowers(std::vector<Flower>& unclassified, DistanceCalc typeDis);
    Classifier(int k, std::vector<Flower> classified);
};