#include "Tasks.h"

//Дан символьный файл, содержащий по крайней мере одну точку.
// Удалить все его элементы, расположенные после последней точки, включая и этот символ

void Task5Function(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::ofstream outputFile("modified_" + filename);
    std::string line;
    std::string text;
    bool foundPoint = false;

    while (std::getline(inputFile, line)) {
        size_t pos = line.find_last_of('.');
        if (pos != std::string::npos) {
            foundPoint = true;
            text += line.substr(0, pos + 1);
            break;
        }
        else {
            text += line + '\n';
        }
    }

    outputFile << text;

    inputFile.close();
    outputFile.close();
}