#include <Tasks.h>

#include <iostream>

class DecimalCounter {
private:
    int value;
    int minValue;
    int maxValue;

public:
    // ����������� ������ � �������������� �������� �� ��������� � ���������
    DecimalCounter(int defaultValue = 0, int min = 0, int max = 100) : value(defaultValue), minValue(min), maxValue(max) {}

    // ����� ���������� �������� �������� �� �������
    void increment() {
        if (value < maxValue) {
            value++;
        }
    }

    // ����� ���������� �������� �������� �� �������
    void decrement() {
        if (value > minValue) {
            value--;
        }
    }

    // �������� ��� ��������� �������� ��������� ��������
    int getValue() {
        return value;
    }
};

void Task2Function() {
    DecimalCounter counterDefault; // �������� �������� �� ���������� �� ���������
    DecimalCounter counterCustom(5, 0, 10); // �������� �������� � ������������� ����������

    std::cout << "������� �� ���������� �� ���������:" << std::endl;
    std::cout << "������� ��������: " << counterDefault.getValue() << std::endl;
    counterDefault.increment();
    std::cout << "����������� �������� �� 1: " << counterDefault.getValue() << std::endl;
    counterDefault.decrement();
    std::cout << "��������� �������� �� 1: " << counterDefault.getValue() << std::endl;

    std::cout << "\n������� � ������������� ����������:" << std::endl;
    std::cout << "������� ��������: " << counterCustom.getValue() << std::endl;
    counterCustom.increment();
    std::cout << "����������� �������� �� 1: " << counterCustom.getValue() << std::endl;
    counterCustom.decrement();
    std::cout << "��������� �������� �� 1: " << counterCustom.getValue() << std::endl;
}