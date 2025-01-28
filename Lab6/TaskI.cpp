//�������� ���������, ������� ������� ��� �����,
//������������� � ���������� ������ ������ ������ ����.

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
            std::cout << "����� '" << pair.first << "' ����������� " << pair.second << " ����" << std::endl;
            foundDuplicate = true;
        }
    }

    if (!foundDuplicate) {
        std::cout << "��� ����, ������������� ����� ������ ����" << std::endl;
    }
}