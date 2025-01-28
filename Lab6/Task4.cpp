#include "Tasks.h"


void Task4Func() {
    
    std::string input;
    std::cout << "������� ���������� ������: " << std::endl;
    std::getline(std::cin, input);

    std::set<char> uniqueDigits;
    for (char c : input) {
        if (std::isdigit(c)) { // ��������� ����� �� 
            uniqueDigits.insert(c);
        }
    }

    if (uniqueDigits.empty()) {
        std::cout << "���" << std::endl;
    }
    else {
        for (char digit : uniqueDigits) {
            std::cout << digit << " ";
        }
        std::cout << std::endl;
    }
}

