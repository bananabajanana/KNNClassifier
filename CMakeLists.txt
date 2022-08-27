cmake_minimum_required(VERSION 3.16.3)
project(KNNClassifier)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(KNNClassifier
        source/srcDistances/srcDistanceCalculators/ChebyshevDistance.cpp
        source/srcDistances/srcDistanceCalculators/ChebyshevDistance.hpp
        source/srcKnnClassifier/Classifier.cpp
        source/srcKnnClassifier/Classifier.hpp
        source/srcDistances/DistanceCalc.cpp
        source/srcDistances/DistanceCalc.hpp
        source/srcDistances/srcDistanceCalculators/EuclideanDistance.cpp
        source/srcDistances/srcDistanceCalculators/EuclideanDistance.hpp
        source/srcKnnClassifier/Flower.cpp
        source/srcKnnClassifier/Flower.hpp
        source/main.cpp
        source/srcDistances/srcDistanceCalculators/ManhattanDistance.cpp
        source/srcDistances/srcDistanceCalculators/ManhattanDistance.hpp
        source/srcKnnClassifier/NPoint.cpp
        source/srcKnnClassifier/NPoint.hpp
        source/srcIO/FileConverter.cpp
        source/srcIO/FileConverter.hpp
        source/srcDistances/DistancesData.cpp
        source/srcDistances/DistancesData.hpp)
