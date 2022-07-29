# KNN classifier
<p><em>"In statistics, the k-nearest neighbors algorithm (k-NN) is a non-parametric supervised learning method [...] k-NN is a type of classification where the function is only approximated locally and all computation is deferred until function evaluation"</em><sup><cite>[1]</cite></sup></p>
<p>This project is an implementation of the kNN algorithm, to estimate the type of Iris flower based on four properties:</p>
<ul>
<li>Sepal length</li>
<li>Sepal width</li>
<li>Petal length</li>
<li>Petal width</li>
</ul>

----
#### This project is written in <b>c++</b>, by <b>Ohad Heines</b> and <b>Michal Iakobashvili</b>

----

## Installation

<p>Clone the repository:</p>

```console
$ git clone 'https://github.com/bananabajanana/KNNClassifier.git'
```

----

## Usage
<p>You can run the project using our provided <code>CMakeLists.txt</code> file:</p>

```console
$ cmake
$ make
$ ./KNNClassifier {k}
```
<p>Replacing {k} with an odd integer of your choosing.</p>

----

## Implementation
We first created a Flower object, that will store a single flower's type and parameters. The flower's type is stored as an enum, with four options: the three possible types, and an undefined option.

```c++
enum typeIris { versicolor, virginica, setosa, undifined };

class Flower {
private:
    typeIris type;
    const FourDPoint character;
    ...
};
```
The FourDPoint object is the Flower's parameters, and functions as a point in a four dimensional coordinate system (for the kNN algorithm).

Our code implements the algorithm with three different possible distance functions: Euclidean distance, Manhattan distance, and Chebyshev distance, but to allow the addition of other distance functions, we implemented generic code with an abstract distance class.

```c++
class DistanceCalc {
public:
    virtual double distance(FourDPoint p1, FourDPoint p2) = 0;
    ...
};
```

In addition, to keep track of all our different types of distances implemented, we made a DistancesData builder class.

```c++
class DistancesData {
    /**
     * @return all the types of distance calculators that can be used.
     */
    static std::vector<DistanceCalc*>& getAllTypes();
};
```

Finally, we created a Classifier class. This class identifies a given vector of flowers based on an input list of already identified Irises. This is implemented step-by-step according to the kNN algorithm, first finding the k closest neighbors to the unidentifiable flower, and then finding which category is most common among them.

The output given by the classifier class is written to an output folder, in a .csv file with an appropriate name thanks to our FileConverter class, which manages this project's input-output. Currently, the file converting system is hyper-specific and not very flexible, but this should be a problem since the UI is bound to change drastically, so the current system is only temporary.

```c++
class FileConverter {
public:
    std::vector<Flower>& updateFromFile(std::string path);
    void updateToFile(std::string path);
    ...
};
```

[1]: https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm