#include "EuclideanDistance.hpp"

double EuclideanDistance::dist(FourDPoint p1, FourDPoint p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2)
                + pow(p1.getZ() - p2.getZ(), 2) + pow(p1.getW() - p2.getW(), 2));
}

EuclideanDistance::EuclideanDistance() {
    this->FILE_NAME = "C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\output\\euclidean_output.csv";
}