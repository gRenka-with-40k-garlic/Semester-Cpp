#include "Tasks.h"

//��� ���� ����� �����, ���������� �� ����� ������� ���������.
// ������� ������, ������, ������������� � ��������� �������� ������� �����..

void Task3Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::ifstream file(filename);
    int element;
    int count = 0;
    std::vector <int> elements;

    while (file >> element) {
        elements.push_back(element);
        count++;
    }

    if (count < 4) {
        std::cout << "���� �������� ����� ������� ���������" << std::endl;
    }

    file.close();



    std::cout << "������ �������: " << elements[0] << std::endl;
    std::cout << "������ �������: " << elements[1] << std::endl;
    std::cout << "������������� �������: " << elements[count - 2] << std::endl;
    std::cout << "��������� �������: " << elements[count - 1] << std::endl;
}