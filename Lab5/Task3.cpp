#include "Tasks.h"

// »спользу€ вектор напишите программу,
// котора€ выполн€ет реверс двух половин массива
// по отдельности.

//входные данные
//1 2 3 4 5 6
//выходные данные
//3 2 1 6 5 4

void Task3Function() {
    std::vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int n = arr.size();
    int half = n / 2;

    // ѕерестановка первой половины вектора
    for (int i = 0; i < half / 2; ++i) {
        std::swap(arr[i], arr[half - 1 - i]);
    }

    // ѕерестановка второй половины вектора
    for (int i = half; i < half + (n - half) / 2; ++i) {
        std::swap(arr[i], arr[n - 1 - i + half]);
    }

    for (int num : arr) {
        std::cout << num << " ";
    }
}