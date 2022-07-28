class Point {
private:
    const double petalLength, petalWidth, sepalLength, sepalWidth;

public:
    double getX();
    double getY();
    double getZ();
    double getW();
    Point(double sepalWidth, double sepalLength, double petalWidth, double petalLength);
};