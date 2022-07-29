cmake_minimum_required(VERSION 3.22)
project(KNNClassifier)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(KNNClassifier
        ChebyshevDistance.cpp
        ChebyshevDistance.hpp
        Classifier.cpp
        Classifier.hpp
        DistanceCalc.cpp
        DistanceCalc.hpp
        EuclideanDistance.cpp
        EuclideanDistance.hpp
        Flower.cpp
        Flower.hpp
        main.cpp
        ManhattanDistance.cpp
        ManhattanDistance.hpp
        NPoint.cpp
        NPoint.hpp
        FileConverter.cpp
        FileConverter.hpp
        DistancesData.cpp
        DistancesData.hpp)
