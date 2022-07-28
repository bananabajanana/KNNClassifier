#include "ManhattanDistance.hpp"


double ManhattanDistance::dist(FourDPoint p1, FourDPoint p2) {
    return fmax(fabs(p1.getX() - p2.getX()), fmax(fabs(p1.getY() - p2.getY()), fmax(fabs(p1.getZ() - p2.getZ()), fabs(p1.getW() - p2.getW()))));
}

ManhattanDistance::ManhattanDistance() {
    this->FILE_NAME = "C:\\Users\\ohadh\\CLionProjects\\KNNClassifier\\source\\output\\manhattan_output.csv";
}