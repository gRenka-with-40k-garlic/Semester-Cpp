#include "Tasks.h"

//��� ���� ����� �����. ������� ����� ����,
// ���������� �� �� ��������, ��� � �������� ����, �� � �������� �������.

void Task4Function(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::ofstream outputFile("rev_" + filename);

    std::vector<int> numbers;
    int number;

    while (inputFile >> number) {
        numbers.push_back(number);
    }

    for (int i = numbers.size() - 1; i >= 0; i--) {
        outputFile << numbers[i] << " ";
    }

    inputFile.close();
    outputFile.close();

};