#include "Tasks.h"

//ƒано целое число n. 
// —оздать вектор содержащий n случайных чисел. 
// Ќайти среднее арифметическое этх чисел и вставить
// это значение в середину вектора.

//входные данные
//7 17 20 19 6 8

//выходные данные
//avg=12

//7 17 20 12 19 6 8


void Task1Function() {
    int n;
    std::cout << "¬ведите длину вектора" << std::endl;
    std::cin >> n;

    std::random_device rd; //создание объекта дл€ генерации случайных чисел.
    std::mt19937 gen(rd()); // инициализаци€ генератора случайных чисел
    std::uniform_int_distribution<int> dis(-99, 99); 
    // создание распределени€ дл€ случайных целых чисел от -99 до 99
    // "случайных чисел" это расплывчато

    std::vector<int> numbers(n);
    //заполн€ю вектор 
    for (int i = 0; i < n; ++i) {
        numbers[i] = dis(gen); 
    }

    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    int avg = sum / n;
    numbers.insert(numbers.begin() + n / 2, avg); 
    // вставка среднего значени€ в середину вектора.
    // если количество не четное вставит с отклонением в лево
    
    std::cout << "avg=" << avg << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }
}