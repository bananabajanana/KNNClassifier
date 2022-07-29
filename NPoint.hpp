#ifndef FOURD_POINT_H_DEFINITION
#define FOURD_POINT_H_DEFINITION
#include <iostream>
#include <vector>

class NPoint {
private:
    const int n;
    const std::vector<double> Point;
public:
    /**
     * returns the point.
     * @return  NPoint.
     */
    const std::vector<double> getPoint() const;
    /**
     *
     * @return
     */
    const int getN() const;

    /**
     * Creates a point in the coordinate system using the flower characteristics.
     * @param sepalWidth - the sepal width of the iris.
     * @param sepalLength - the sepal length of the iris.
     * @param petalWidth - the petal width of the iris.
     * @param petalLength - the petal length of the iris.
     */
    NPoint(double sepalWidth, double sepalLength, double petalWidth, double petalLength);
    /**
     * Creates a point in the coordinate system using the properties.
     * @param properties
     * @param n
     */
    NPoint(double* properties, int n);
    /**
     * Get array of n properties and makes from that a point that is a vector.
     * @param properties - the properties of a point.
     * @param n - the number of dimensions.
     * @return the point as vector.
     */
    static std::vector<double> makePoint(double* properties, int n);
};

#endif