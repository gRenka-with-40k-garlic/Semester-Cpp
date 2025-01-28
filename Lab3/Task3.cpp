#include "Tasks.h"

//Дан файл целых чисел, содержащий не менее четырех элементов.
// Вывести первый, второй, предпоследний и последний элементы данного файла..

void Task3Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::ifstream file(filename);
    int element;
    int count = 0;
    std::vector <int> elements;

    while (file >> element) {
        elements.push_back(element);
        count++;
    }

    if (count < 4) {
        std::cout << "Файл содержит менее четырех элементов" << std::endl;
    }

    file.close();



    std::cout << "Первый элемент: " << elements[0] << std::endl;
    std::cout << "Второй элемент: " << elements[1] << std::endl;
    std::cout << "Предпоследний элемент: " << elements[count - 2] << std::endl;
    std::cout << "Последний элемент: " << elements[count - 1] << std::endl;
}