#include "Tasks.h"

//���� ����� ����� K � ����, ���������� ��������������� ����� �����.
// ������� K-� ������� ����� (�������� ���������� �� 1).
// ���� ����� ������� �����������, �� ������� -1.

void Task2Function(const std::string& filename) {
    setlocale(LC_ALL, "");
    std::ifstream file(filename);
    int element;
    int k;
    std::cout << "������� � ";
    std::cin >> k;

    int count = 0;
    while (file >> element) {
        count++;
        if (count == k) {
            std::cout << k << "-� �������: " << element << std::endl;
            file.close();
            return;
        }
    }

    std::cout << "-1" << std::endl;
    file.close();
}