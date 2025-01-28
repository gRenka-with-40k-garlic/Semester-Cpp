#include "Tasks.h"

// ��������� ������ �������� ���������,
// ������� ��������� ������ ���� ������� �������
// �� �����������.

//������� ������
//1 2 3 4 5 6
//�������� ������
//3 2 1 6 5 4

void Task3Function() {
    std::vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int n = arr.size();
    int half = n / 2;

    // ������������ ������ �������� �������
    for (int i = 0; i < half / 2; ++i) {
        std::swap(arr[i], arr[half - 1 - i]);
    }

    // ������������ ������ �������� �������
    for (int i = half; i < half + (n - half) / 2; ++i) {
        std::swap(arr[i], arr[n - 1 - i + half]);
    }

    for (int num : arr) {
        std::cout << num << " ";
    }
}