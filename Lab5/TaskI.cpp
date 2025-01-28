#include "Tasks.h"

//Даны натуральное число n , действительные числа a[i]. 
// Преобразовать последовательность а[]
// расположив вначале отрицательные члены,
// а затем неотрицательные.
// порядок отрицательных чисел изменяется на обратный,
// а порядок неотрицательных сохраняется прежним;

void TaskIFunction() {
    int n = 0;
    std::cout << "Введите N: ";
    std::cin >> n;

    double* a = new double[n]; 

    std::cout << "Введите A[]: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::stack<double> min; //отрицательные
    std::queue<double> plus; // положительные
    std::vector<double> result;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { 
            min.push(a[i]);
            // Добавление отрицательных чисел в стак
        }
        else {
            plus.push(a[i]);
            // Добавление положительных чисел в очередь
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

    //сначала прибавляю к result стак (1 вошел - последний вышел)
    //потом прибавляю очередь  (1 вошел - 1 вышел)

    for (double num : result) {
        std::cout << num << " ";
    }

    delete[] a; 
}
