#include "Tasks.h"

//Задание 1
//Дан текстовый файл, в котором через пробел записаны числа.Вывести на экран сумму всех чисел.atof
//Пример
//Дано : 21  35  456  7  89
//Результат: Сумма = 608

double Task1Function(const std::string& filename) {
    double result = 0;
    std::fstream file(filename);
    std::string numberStr;

    if (file.is_open()) {
        while (file >> numberStr) {
            result += atof(numberStr.c_str());
        }
        file.close();
        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}