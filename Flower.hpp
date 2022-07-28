#include "Point.hpp"
enum typeIris { versicolor, virginica, setosa, undifined};

class Flower {
private:
    int type;
    const Point character;

public:
    void setType(typeIris iris);
    Point getPoint();
    typeIris getTypeOfIris();
    Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength, typeIris type);
};