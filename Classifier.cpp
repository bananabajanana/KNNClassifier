#include "Classifier.hpp"
#include "DistanceCalc.hpp"
#define MAX_NUM 99999999

Classifier::Classifier(int k, std::vector<Flower> classified) :k(k) {
        //prob
}

void Classifier::defFlowers(std::vector<Flower>& unclassified, DistanceCalc typeDis) {
    for(int i; i<unclassified.size();i++) {
        defFlower(unclassified[i], typeDis);
    }
}
void Classifier::defFlower(Flower& f, DistanceCalc calculator) {
    std::vector<double> distances;
    std::vector<Flower> results;
    //going to change
    for(int i=0;i<classified.size();i++) {
        distances.push_back(calculator.dist(f.getPoint(), classified[i].getPoint()));
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
    //versicolor, virginica, setosa, undifined};
    if(types[0]==fmax(types[0],(int)fmax(types[1],types[2]))) {
        f.setType(versicolor);
    }
    if(types[1]==fmax(types[0],(int)fmax(types[1],types[2]))) {
        f.setType(virginica);
    }

    if(types[1]==fmax(types[0],(int)fmax(types[1],types[2]))) {
        f.setType(setosa);
    }

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