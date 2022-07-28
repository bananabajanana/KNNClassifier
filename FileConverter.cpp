#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <string.h>

#include "FileConverter.hpp"

std::vector<Flower> &FileConverter::getContent() {
    return this->content;
}

void FileConverter::setContent(std::vector<Flower> &newContent) {
    content.clear();
    for(Flower& flower : newContent) {
        this->content.push_back(flower);
    }
}

std::vector<Flower>& FileConverter::updateFromFile(std::string path) {
    content.clear();
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line)) {
        char* info = const_cast<char *>(line.c_str());
        content.push_back(flowerFromLine(info));
    }
    return content;
}

void FileConverter::updateToFile(std::string path) {
    std::ofstream file(path);
    for (auto& flower : content) {
        switch (flower.getTypeOfIris()) {
            case versicolor:
                file << "Iris-versicolor" << std::endl;
                break;
            case virginica:
                file << "Iris-virginica" << std::endl;
                break;
            case setosa:
                file << "Iris-setosa" << std::endl;
                break;
            default:
                file << "!!Undefined!!" << std::endl;
                break;
        }
    }
}

//for the specific input type "num,num,num,num,type"
Flower& FileConverter::flowerFromLine(char *st) {
    char * val;
    double parameters[4];
    val = strtok(st, ",");
    for(int i = 0; i < 4; i++) {
        parameters[i] = std::stod(val);
        val = strtok(nullptr, ",");
    }
    Flower* output = new Flower(parameters[0], parameters[1], parameters[2], parameters[3]);
    if (val != nullptr) {
        std::string temp(val);
        if (temp == "Iris-setosa") {
            output->setType(setosa);
        } else if (temp == "Iris-versicolor") {
            output->setType(versicolor);
        } else if (temp == "Iris-virginica") {
            output->setType(virginica);
        }
    }
    return *output;
}