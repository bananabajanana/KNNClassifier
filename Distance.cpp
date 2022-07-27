#include "Distance.hpp"
#include <cmath>

double static Distance::getDistance(Point p1, Point p2, typeOfDistance dis) {
	switch (dis) {
	case euclidean:
		return getEuclidean(p1, p2);
		break;
	case manhattan:
		return getManhattan(p1, p2);
		break;
	case chebyshev:
		return getChebyshev(p1, p2);
		break;
	default:
		return;
	}
}

double Distance::getEuclidean(Point p1, Point p2) {
	return sqrt(pow(p1.getX - p2.getX, 2) + pow(p1.getY - p2.getY, 2)
		+ pow(p1.getZ - p2.getZ, 2) + pow(p1.getW - p2.getW, 2));
}
double Distance::getManhattan(Point p1, Point p2) {
	return abs(p1.getX - p2.getX) + abs(p1.getY - p2.getY) + abs(p1.getZ - p2.getZ) + abs(p1.getW - p2.getW);
}

double Distance::getChebyshev(Point p1, Point p2) {
	return max(abs(p1.getX - p2.getX),max(abs(p1.getY - p2.getY),max(abs(p1.getZ - p2.getZ), abs(p1.getW - p2.getW))));
}
