#include "Tasks.h"

//Дано целое число K и файл, содержащий неотрицательные целые числа.
// Вывести K-й элемент файла (элементы нумеруются от 1).
// Если такой элемент отсутствует, то вывести -1.

void Task2Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::ifstream file(filename);
    int element;
    int k;
    std::cout << "Введите К ";
    std::cin >> k;

    int count = 0;
    while (file >> element) {
        count++;
        if (count == k) {
            std::cout << k << "-й элемент: " << element << std::endl;
            file.close();
            return;
        }
    }

    std::cout << "-1" << std::endl;
    file.close();
}