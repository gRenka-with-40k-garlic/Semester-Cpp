#include "Tasks.h"

//Дан текстовый файл содержащий целые числа. 
//Переписать эти числа в бинарный файл и вывести его
//содержимое на экран.

void Task1Function(const std::string& filename) {
    std::ifstream file(filename);
    std::ofstream binfile("Task1.bin", std::ios::binary);
    std::ifstream binfileRead("Task1.bin", std::ios::binary);

    int number;

    while (file >> number) {
        binfile.write(reinterpret_cast<const char*>(&number), sizeof(number));
    }

    file.close();
    binfile.close();
    binfileRead.seekg(0, std::ios::beg);

    while (binfileRead.read(reinterpret_cast<char*>(&number), sizeof(number))) {
        std::cout << number << " ";
    }

    binfileRead.close();
}

