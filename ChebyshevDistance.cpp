#include "ChebyshevDistance.hpp"

int ChebyshevDistance::dist(Point p1, Point p2) {
    return abs(p1.getX() - p2.getX()) + abs(p1.getY() - p2.getY()) + abs(p1.getZ() - p2.getZ()) + abs(p1.getW() - p2.getW());
}