#ifndef FILE_CONVERTER_H_INCLUDED
#define FILE_CONVERTER_H_INCLUDED

#include <string>
#include <vector>

#include "source/srcKnnClassifier/Flower.hpp"

class FileConverter {
private:
    std::vector<Flower> content;
    Flower& flowerFromLine(char *st);

public:
    std::vector<Flower>& updateFromFile(std::string path);
    void updateToFile(std::string path);
    std::vector<Flower>& getContent();
    void setContent(std::vector<Flower>& content);
};

#endif