#include "Tasks.h"

//��������� ����,
// ���������� ������� ��������� ��������
// ���������� ���� � �������� �������.

//������� ������
//abcdf-xyz
//�������� ������
//zyx-fdcba

void Task4Function() {
    std::string input;
    std::cout << "������� ������: ";
    std::getline(std::cin, input);

    std::stack<char> ch;

    for (char c : input) {
        ch.push(c);
    }

    while (!ch.empty()) {
        std::cout << ch.top();
        ch.pop();

    }
}