#include "ManhattanDistance.hpp"


double ManhattanDistance::dist(Point p1, Point p2) {
    return fmax(fabs(p1.getX() - p2.getX()), fmax(fabs(p1.getY() - p2.getY()), fmax(fabs(p1.getZ() - p2.getZ()), fabs(p1.getW() - p2.getW()))));

}