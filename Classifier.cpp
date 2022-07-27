#include "Classifier.hpp"
#include "Distance.hpp"
#define MAX_NUM 99999999

Classifier::Classifier(int k, std::vector<Flower> classified) :this->k(k) {
        //prob
}

void Classifier::defFlowers(std::vector<Flower>& unclassified, typeOfDistance typeDis) {
    for(int i; i<unclassified.size();i++) {
        defFlower(unclassified[i],typeDis);
    }
}
void Classifier::defFlower(Flower& f, typeOfDistance typeDis) {
    std::vector<double> distances;
    std::vector<Flower> results;
    //going to change
    for(int i=0;i<classified.size();i++) {
        distances.push_back(Distance::getDistance(f.getPoint(),classified[i].getPoint(), typeDis));
    }
    //changed(my mind)
    for(int i=0;i<k;i++) {
        results.push_back(classified[whereMinInArr(distances)]);
    }
    //{ versicolor, virginica, setosa}
    int types[] = {0,0,0};
    for(int i=0;i<k;i++) {
        types[results[i].getTypeOfIris()]++;
    }
    f.setType(max(types[0],max(types[1],types[2])));

}


int Classifier::whereMinInArr(std::vector<double>& distances) {
    double min = MAX_NUM;
    for(int i=0;i<distances.size();i++) {
        if(min > distances[i]) {
            min = distances[i];
        }
    }
    for(int i=0;i<distances.size();i++) {
        if(min == distances[i]) {
            distances[i] = MAX_NUM;
            return i;
        }
    }

}