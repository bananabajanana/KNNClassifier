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


[1]: https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm