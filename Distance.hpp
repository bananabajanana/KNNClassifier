#include "Point.hpp"
enum typeOfDistance = { euclidean , manhattan , chebyshev };
class Distance {
private:
    double getEuclidean(Point p1, Point p2);
    double getManhattan(Point p1, Point p2);
    double getChebyshev(Point p1, Point p2);
public:
    double static getDistance(Point p1, Point p2,typeOfDistance dis );
};