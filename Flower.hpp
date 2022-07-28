#include "Point.hpp"
enum typeIris { versicolor, virginica, setosa, undifined};

class Flower {
private:
    typeIris type;
    const Point character;

public:
    /**
     * Set type of the iris.
     * @param iris  - the type;
     */
    void setType(typeIris iris);

    /**
     * Get the Point in the coordinate system.
     * @return the Point.
     */
    Point getPoint();

    /**
     * Get the Point in the type of the iris.
     * @return the type.
     */
    typeIris getTypeOfIris();

    /**
     * Creat the flower using its characteristics.
     * @param sepalWidth - sepal width.
     * @param sepalLength - sepal length.
     * @param petalWidth - petal width.
     * @param petalLength - petal length.
     * @param type - the type of the iris.
     */
    Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength, typeIris type);

    /**
     * Creat the flower using its characteristics.
     * @param sepalWidth - sepal width.
     * @param sepalLength - sepal length.
     * @param petalWidth - petal width.
     * @param petalLength - petal length.
     */
    Flower(double sepalWidth, double sepalLength, double petalWidth, double petalLength);
};