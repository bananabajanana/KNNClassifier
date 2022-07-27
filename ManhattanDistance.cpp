#include "ManhattanDistance.hpp"
#include <cmath>

int ManhattanDistance::dist(Point p1, Point p2) {
    return max(abs(p1.getX - p2.getX),max(abs(p1.getY - p2.getY),max(abs(p1.getZ - p2.getZ), abs(p1.getW - p2.getW))));

}