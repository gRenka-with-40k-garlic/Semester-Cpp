#include "Tasks.h"

//���� ����������� ����� n , �������������� ����� a[i]. 
// ������������� ������������������ �[]
// ���������� ������� ������������� �����,
// � ����� ���������������.
// ������� ������������� ����� ���������� �� ��������,
// � ������� ��������������� ����������� �������;

void TaskIFunction() {
    int n = 0;
    std::cout << "������� N: ";
    std::cin >> n;

    double* a = new double[n]; 

    std::cout << "������� A[]: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::stack<double> min; //�������������
    std::queue<double> plus; // �������������
    std::vector<double> result;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { 
            min.push(a[i]);
            // ���������� ������������� ����� � ����
        }
        else {
            plus.push(a[i]);
            // ���������� ������������� ����� � �������
        }
    }

    
    while (!min.empty()) {
        result.push_back(min.top());
        min.pop();
    }
    while (!plus.empty()) {
        result.push_back(plus.front());
        plus.pop();
    }

    //������� ��������� � result ���� (1 ����� - ��������� �����)
    //����� ��������� �������  (1 ����� - 1 �����)

    for (double num : result) {
        std::cout << num << " ";
    }

    delete[] a; 
}
