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
$ mkdir build
$ cd build
$ cmake ..
$ make
$ ./KNNClassifier {k}
```
<p>Replacing {k} with an odd integer of your choosing.</p>

----

## Implementation
We created a Flower object that will define each iris. Every flower has its type - there are 3 types of irises and an undifined type. 
We created an enum in order to control the types that iris can have. In addition each flower has its own point in the coordinate System, 
characterised by its own characteristics. In order to make it - We created the FourDPoint.
Now, after characterizing the objects we made the Distances classes - now Ohad will write things.
For the algorithm of merging the undefined flowers we created the Classifier class.
The Classifier class uses defined flowers (flowers that we know their type) and our k number.
Each time we use one undefined flower and we measure its distance from all the defined flowers.
Than, we search the min distance k times. 
By that we find the k closes flowers and than we can check and find the undifined flower's type.
how we write and read its you ohad its you.

[1]: https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm