#include "EuclideanDistance.hpp"

double EuclideanDistance::dist(NPoint p1, NPoint p2) {
    if(p1.getN() != p2.getN()) {
        exit(1);
    }
    double sum=0;
    for(int i=0; i<p1.getN();i++) {
        sum+= pow(p1.getPoint()[i] - p2.getPoint()[i], 2);
    }
    return sqrt(sum);
}

EuclideanDistance::EuclideanDistance() {
    this->FILE_NAME = "C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\output\\euclidean_output.csv";
}