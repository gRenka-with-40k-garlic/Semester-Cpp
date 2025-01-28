#include "Tasks.h"


void Task7(const std::string& filename) {
    std::multimap<std::string, int> wordCount;
    std::string line, word;

    int totalWords = 0;
    std::ifstream file(filename);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (ss >> word) {
            // ѕодсчитываем количество вхождений слова до текущего момента
            int count = wordCount.count(word);
            std::cout << "—лово: " << word << ", количество встреч до: " << count << std::endl;

            // ƒобавл€ем слово и увеличиваем общее количество слов
            wordCount.insert({ word, totalWords });
            totalWords++;
        }
    }

    file.close(); 
}
