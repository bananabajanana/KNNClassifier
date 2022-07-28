#include <cmath>
#include "EuclideanDistance.hpp"

int EuclideanDistance::dist(Point p1, Point p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2)
                + pow(p1.getZ() - p2.getZ(), 2) + pow(p1.getW() - p2.getW(), 2));
}