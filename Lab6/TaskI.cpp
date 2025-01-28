//Напишите программу, которая выводит все цифры,
//встречающиеся в символьной строке больше одного раза.

#include <Tasks.h>

void TaskI(const std::string& str) {
    std::map<char, int> digitCount;

    for (char c : str) {
        if (std::isdigit(c)) {
            digitCount[c]++;
        }
    }

    bool foundDuplicate = false;
    for (const auto& pair : digitCount) {
        if (pair.second > 1) {
            std::cout << "Цифра '" << pair.first << "' встречается " << pair.second << " раза" << std::endl;
            foundDuplicate = true;
        }
    }

    if (!foundDuplicate) {
        std::cout << "Нет цифр, встречающихся более одного раза" << std::endl;
    }
}