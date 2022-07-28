#include "ManhattanDistance.hpp"
#include <cmath>

int ManhattanDistance::dist(Point p1, Point p2) {
    return fmax(abs(p1.getX() - p2.getX()), fmax(abs(p1.getY() - p2.getY()), fmax(abs(p1.getZ() - p2.getZ()), abs(p1.getW() - p2.getW()))));

}