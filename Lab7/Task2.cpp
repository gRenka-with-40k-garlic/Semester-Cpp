#include <Tasks.h>

#include <iostream>

class DecimalCounter {
private:
    int value;
    int minValue;
    int maxValue;

public:
    // Конструктор класса с инициализацией значения по умолчанию и диапазона
    DecimalCounter(int defaultValue = 0, int min = 0, int max = 100) : value(defaultValue), minValue(min), maxValue(max) {}

    // Метод увеличения значения счетчика на единицу
    void increment() {
        if (value < maxValue) {
            value++;
        }
    }

    // Метод уменьшения значения счетчика на единицу
    void decrement() {
        if (value > minValue) {
            value--;
        }
    }

    // Свойство для получения текущего состояния счетчика
    int getValue() {
        return value;
    }
};

void Task2Function() {
    DecimalCounter counterDefault; // Создание счетчика со значениями по умолчанию
    DecimalCounter counterCustom(5, 0, 10); // Создание счетчика с произвольными значениями

    std::cout << "Счетчик со значениями по умолчанию:" << std::endl;
    std::cout << "Текущее значение: " << counterDefault.getValue() << std::endl;
    counterDefault.increment();
    std::cout << "Увеличиваем значение на 1: " << counterDefault.getValue() << std::endl;
    counterDefault.decrement();
    std::cout << "Уменьшаем значение на 1: " << counterDefault.getValue() << std::endl;

    std::cout << "\nСчетчик с произвольными значениями:" << std::endl;
    std::cout << "Текущее значение: " << counterCustom.getValue() << std::endl;
    counterCustom.increment();
    std::cout << "Увеличиваем значение на 1: " << counterCustom.getValue() << std::endl;
    counterCustom.decrement();
    std::cout << "Уменьшаем значение на 1: " << counterCustom.getValue() << std::endl;
}