#include <Tasks.h>


class TwoVariables {
private:
    int var1;
    int var2;

public:
    // Конструктор класса
    TwoVariables(int v1, int v2) : var1(v1), var2(v2) {}

    // Функция вывода на экран значений переменных
    void get() {
        std::cout << "Значение переменной 1: " << var1 << std::endl;
        std::cout << "Значение переменной 2: " << var2 << std::endl;
    }

    // Функция изменения значений переменных
    void set(int v1, int v2) {
        var1 = v1;
        var2 = v2;
    }

    // Функция нахождения суммы значений переменных
    int sum() {
        return var1 + var2;
    }

    // Функция нахождения наибольшего значения из двух переменных
    int findMax() {
        return (var1 > var2) ? var1 : var2;
    }
};

void Task1Function() {
    TwoVariables obj(10, 20); // Создание объекта класса с начальными значениями 10 и 20
    obj.get(); // Вывод значений переменных
    std::cout << "Сумма значений переменных: " << obj.sum() << std::endl;
    std::cout << "Наибольшее значение: " << obj.findMax() << std::endl;

    obj.set(30, 15); // Изменение значений переменных
    obj.get(); // Вывод новых значений переменных
    std::cout << "Сумма значений переменных: " << obj.sum() << std::endl;
    std::cout << "Наибольшее значение: " << obj.findMax() << std::endl;
}