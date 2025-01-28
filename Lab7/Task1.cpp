#include <Tasks.h>


class TwoVariables {
private:
    int var1;
    int var2;

public:
    // ����������� ������
    TwoVariables(int v1, int v2) : var1(v1), var2(v2) {}

    // ������� ������ �� ����� �������� ����������
    void get() {
        std::cout << "�������� ���������� 1: " << var1 << std::endl;
        std::cout << "�������� ���������� 2: " << var2 << std::endl;
    }

    // ������� ��������� �������� ����������
    void set(int v1, int v2) {
        var1 = v1;
        var2 = v2;
    }

    // ������� ���������� ����� �������� ����������
    int sum() {
        return var1 + var2;
    }

    // ������� ���������� ����������� �������� �� ���� ����������
    int findMax() {
        return (var1 > var2) ? var1 : var2;
    }
};

void Task1Function() {
    TwoVariables obj(10, 20); // �������� ������� ������ � ���������� ���������� 10 � 20
    obj.get(); // ����� �������� ����������
    std::cout << "����� �������� ����������: " << obj.sum() << std::endl;
    std::cout << "���������� ��������: " << obj.findMax() << std::endl;

    obj.set(30, 15); // ��������� �������� ����������
    obj.get(); // ����� ����� �������� ����������
    std::cout << "����� �������� ����������: " << obj.sum() << std::endl;
    std::cout << "���������� ��������: " << obj.findMax() << std::endl;
}