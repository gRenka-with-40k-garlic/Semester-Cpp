#include "Tasks.h"

//Задание 5. Замена последовательности символов в строке
//Имеется текстовый файл. Прочитать его и найти в строке все заданные последовательности символов и заменить их другой последовательностью.

void Task5Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::fstream file(filename);
    std::string line;

    std::string wordToReplace = "лекц";
    std::string newWord = "НЕ ЛЕКЦИЯ";

    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(wordToReplace, pos)) != std::string::npos) {
            line.replace(pos, wordToReplace.length(), newWord);
            pos += newWord.length();
        }
        std::cout << line << std::endl;
    }
}