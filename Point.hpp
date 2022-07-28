class Point {
private:
    const double petalLength, petalWidth, sepalLength, sepalWidth;

public:
    /**
     * Get the x-coordinate in the coordinate system.
     * @return petalLength.
     */
    double getX() const;

    /**
     * Get the y-coordinate in the coordinate system.
     * @return petalWidth.
     */
    double getY() const;

    /**
     * Get the z-coordinate in the coordinate system.
     * @return sepalLength.
     */
    double getZ() const;

    /**
     * Get the w-coordinate in the coordinate system.
     * @return sepalWidth.
     */
    double getW() const;

    /**
     * Creates a point in the coordinate system using the flower characteristics.
     * @param sepalWidth - the sepal width of the iris.
     * @param sepalLength - the sepal length of the iris.
     * @param petalWidth - the petal width of the iris.
     * @param petalLength - the petal length of the iris.
     */
    Point(double sepalWidth, double sepalLength, double petalWidth, double petalLength);
};