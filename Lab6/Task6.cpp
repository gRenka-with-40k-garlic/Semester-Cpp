#include "Tasks.h"



void Task6Func() {
    std::string line;
    std::cout << "������� ��������� ������: " << std::endl;
    std::getline(std::cin, line);
    std::map<std::string, int> wordCount;
    std::istringstream iss(line); // c������� ������ ��� ��������� ������ �� �����
    std::string word;

    while (iss >> word) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        std::cout << pair.first << " - " << pair.second << "; ";
    }
    std::cout << std::endl;
}
