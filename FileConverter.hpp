#include <string>
#include <vector>

#include "Flower.hpp"

class FileConverter {
private:
    std::vector<Flower> content;
    Flower& flowerFromLine(char *st);

public:
    FileConverter();
    std::vector<Flower>& updateFromFile(std::string path);
    void updateToFile(std::string path);
    std::vector<Flower>& getContent();
    void setContent(std::vector<Flower>& content);
};
