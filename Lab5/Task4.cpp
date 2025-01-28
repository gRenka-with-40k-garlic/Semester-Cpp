#include "Tasks.h"

//»спользу€ стек,
// напечатать символы некоторой величины
// строкового типа в обратном пор€дке.

//входные данные
//abcdf-xyz
//выходные данные
//zyx-fdcba

void Task4Function() {
    std::string input;
    std::cout << "¬ведите строку: ";
    std::getline(std::cin, input);

    std::stack<char> ch;

    for (char c : input) {
        ch.push(c);
    }

    while (!ch.empty()) {
        std::cout << ch.top();
        ch.pop();

    }
}