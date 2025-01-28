#include "Tasks.h"


//�������� ���������, ������� ������� ����� ���������� � ���������� ������.
// � ������ ���������� ��������� ������� �� ������ "., ; :!? " 
// (��������� ���������� �� ������ ������ � ��������� ����������).
// (���������: set, count)
void Task3Func()
{
    std::string line;
    std::cout << "������� ���������:" << std::endl;
    std::getline(std::cin, line);

    std::set<char> punctuation = { '.', ',', ';', ':', '!', '?' }; // ��������� ������ ����������
    int punctuationCount = 0; 

    for (char c : line) { // ������� �������� � ������
        if (punctuation.find(c) != punctuation.end()) { // ��������, �������� �� ������ ������ ����������
            punctuationCount++; // ���������� ��������, ���� ������ �������� ������ ����������
        }
    }

    std::cout << "���������� ������ ����������: " << punctuationCount << std::endl; // ����� ���������� ������ ����������
}