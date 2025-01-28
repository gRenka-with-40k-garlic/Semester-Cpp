#include "Tasks.h"


void Task7(const std::string& filename) {
    std::multimap<std::string, int> wordCount;
    std::string line, word;

    int totalWords = 0;
    std::ifstream file(filename);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (ss >> word) {
            // ������������ ���������� ��������� ����� �� �������� �������
            int count = wordCount.count(word);
            std::cout << "�����: " << word << ", ���������� ������ ��: " << count << std::endl;

            // ��������� ����� � ����������� ����� ���������� ����
            wordCount.insert({ word, totalWords });
            totalWords++;
        }
    }

    file.close(); 
}
