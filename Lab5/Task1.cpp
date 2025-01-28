#include "Tasks.h"

//���� ����� ����� n. 
// ������� ������ ���������� n ��������� �����. 
// ����� ������� �������������� ��� ����� � ��������
// ��� �������� � �������� �������.

//������� ������
//7 17 20 19 6 8

//�������� ������
//avg=12

//7 17 20 12 19 6 8


void Task1Function() {
    int n;
    std::cout << "������� ����� �������" << std::endl;
    std::cin >> n;

    std::random_device rd; //�������� ������� ��� ��������� ��������� �����.
    std::mt19937 gen(rd()); // ������������� ���������� ��������� �����
    std::uniform_int_distribution<int> dis(-99, 99); 
    // �������� ������������� ��� ��������� ����� ����� �� -99 �� 99
    // "��������� �����" ��� �����������

    std::vector<int> numbers(n);
    //�������� ������ 
    for (int i = 0; i < n; ++i) {
        numbers[i] = dis(gen); 
    }

    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    int avg = sum / n;
    numbers.insert(numbers.begin() + n / 2, avg); 
    // ������� �������� �������� � �������� �������.
    // ���� ���������� �� ������ ������� � ����������� � ����
    
    std::cout << "avg=" << avg << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }
}