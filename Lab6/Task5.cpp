#include "Tasks.h"

void Task5(const std::string& filename) {
    std::map<std::string, int> wordCount;
    std::string line, word;

    std::ifstream file(filename);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (ss >> word) {
            wordCount[word]++;
        }
    }
    file.close();

    // ¬ыводим количество различных слов и их частоту
    std::cout << " оличество различных слов в тексте: " << wordCount.size() << std::endl;
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

