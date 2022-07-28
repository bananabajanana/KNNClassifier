#ifndef FLOWER_H_DEFINITION
#define FLOWER_H_DEFINITION

#include "FourDPoint.hpp"
enum typeIris { versicolor, virginica, setosa, undifined};

class Flower {
private:
    typeIris type;
    const FourDPoint character;

public:
    /**
     * Set type of the iris.
     * @param iris  - the type;
     */
    void setType(typeIris iris);

    /**
     * Get the FourDPoint in the coordinate system.
     * @return the FourDPoint.
     */
    FourDPoint getPoint();

    /**
     * Get the FourDPoint in the type of the iris.
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

#endif