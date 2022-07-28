#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <string.h>

#include "FileConverter.hpp"

std::vector<Flower> &FileConverter::getContent() {
    return this->content;
}

void FileConverter::setContent(std::vector<Flower> &content) {
    content.clear();
    for(auto& flower : content) {
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
        file << flower.getTypeOfIris() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const typeIris &typeIris) {
    switch (typeIris) {
        case versicolor:
            return os << "Iris-versicolor";
        case virginica:
            return os << "Iris-virginica";
        case setosa:
            return os << "Iris-setosa";
        default:
            return os << "!!Undefined!!";
    }
}

//for the specific input type "num,num,num,num,type"
Flower& FileConverter::flowerFromLine(char *st) {
    char * val;
    int parameters[4];
    val = strtok(st, ",");
    for(int i = 0; i < 4; i++) {
        parameters[i] = std::stof(val);
        val = strtok(nullptr, ",");
    }
    Flower* output = new Flower(parameters[0], parameters[1], parameters[2], parameters[3]);
    if (val == "Iris-setosa") {
        output->setType(setosa);
    } else if (val == "Iris-versicolor") {
        output->setType(versicolor);
    } else if (val == "Iris-virginica") {
        output->setType(virginica);
    }
    return *output;
}