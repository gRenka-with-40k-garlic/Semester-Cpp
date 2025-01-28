#include <Tasks.h>

#include <iostream>

class Variables {
private:
    int var1;
    int var2;

public:
    // ����������� � �������� �����������
    Variables(int v1, int v2) : var1(v1), var2(v2) {
        std::cout << "������ ������ � ����������� " << var1 << " � " << var2 << std::endl;
    }

    // ����������� ���������������� ����� ������ �� ���������
    Variables() : var1(0), var2(0) {
        std::cout << "������ ������ � ����������� �� ���������: " << var1 << " � " << var2 << std::endl;
    }

    // ����������
    ~Variables() {
        std::cout << "������ � ����������� " << var1 << " � " << var2 << " ������" << std::endl;
    }
};

void Task3Function() {
    // �������� �������� ������ � ���������� ��������������
    Variables obj1(10, 20);
    Variables obj2;
}