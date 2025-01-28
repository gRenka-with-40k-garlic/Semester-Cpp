#include "Tasks.h"

//������� 5. ������ ������������������ �������� � ������
//������� ��������� ����. ��������� ��� � ����� � ������ ��� �������� ������������������ �������� � �������� �� ������ �������������������.

void Task5Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::fstream file(filename);
    std::string line;

    std::string wordToReplace = "����";
    std::string newWord = "�� ������";

    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(wordToReplace, pos)) != std::string::npos) {
            line.replace(pos, wordToReplace.length(), newWord);
            pos += newWord.length();
        }
        std::cout << line << std::endl;
    }
}