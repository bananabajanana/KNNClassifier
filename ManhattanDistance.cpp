#include "ManhattanDistance.hpp"


double ManhattanDistance::dist(Properties p1, Properties p2) {
    if(p1.getN() != p2.getN()) {
        exit(1);
    }
    double sum = 0;
    for(int i=0; i<p1.getN();i++) {
        sum+= fabs(p1.getPoint()[i] - p2.getPoint()[i]);
    }
    return sum;
}

ManhattanDistance::ManhattanDistance() {
    this->FILE_NAME = "C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\output\\manhattan_output.csv";
}