#include <Tasks.h>

#include <iostream>

class Variables {
private:
    int var1;
    int var2;

public:
    // Конструктор с входными параметрами
    Variables(int v1, int v2) : var1(v1), var2(v2) {
        std::cout << "Создан объект с переменными " << var1 << " и " << var2 << std::endl;
    }

    // Конструктор инициализирующий члены класса по умолчанию
    Variables() : var1(0), var2(0) {
        std::cout << "Создан объект с переменными по умолчанию: " << var1 << " и " << var2 << std::endl;
    }

    // Деструктор
    ~Variables() {
        std::cout << "Объект с переменными " << var1 << " и " << var2 << " удален" << std::endl;
    }
};

void Task3Function() {
    // Создание объектов класса с различными конструкторами
    Variables obj1(10, 20);
    Variables obj2;
}