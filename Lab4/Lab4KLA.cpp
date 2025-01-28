//Написать программу, в которой необходимо создать структуру,
//элементы определены в задании.
//Объявить массив данных типа структуры и ввести
//значения его элементов с клавиатуры.
//Массив данных сохранять в файле и читать данные из файла.
//Предусмотреть меню. 

//Создать список сотрудников (массив структур).
//Элемент списка содержит фамилию, год рождения.
//Написать процедуры записи списка в текстовый файл,
//чтение данных из файла, поиска данных в списке по некоторому критерию. 

//Определить количество сотрудников в списке.
//Определить количество сотрудников каждого года рождения.
//Упорядочить список в алфавитном порядке.
//Упорядочить список по году рождения.
//Вывести список на экран в виде:

//Год рождения 1989
//  Иванов
//  Петров
//  Сидоров
//Год рождения 1968
//  Миров
//  Торов
//  Сомов

//Консольное меню при запуске
// 1. Ввод данных
// 2. Чтение данных из файла
// 3. Запись данных в файл
// 4. Вывод данных на экран
// 4. Сортировка по фамилии
// 5. Группировка по году (year)
// 6. Конец работы (Закрыть консоль)
// Введите номер операции

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

#include <clocale>
#include <windows.h>

struct Employee {
    std::string surname;
    int birthYear;
};

std::vector<Employee> employees;

void inputData() {
    Employee emp;
    std::cout << "Введите фамилию сотрудника: ";
    std::cin >> emp.surname;
    std::cout << "Введите год рождения сотрудника: ";
    std::cin >> emp.birthYear;

    employees.push_back(emp);
}

void saveDataToFile() {
    std::ofstream outFile("employees.txt");
    if (outFile.is_open()) {
        for (const auto& emp : employees) {
            outFile << emp.surname << " " << emp.birthYear << std::endl;
        }
        outFile.close();
        std::cout << "Сохранено успешно.\n";
    }
    else {
        std::cout << "Не удалось открыть файл для записи.\n";
    }
}

void readDataFromFile() {
    employees.clear();
    std::ifstream inFile("employees.txt");
    if (inFile.is_open()) {
        Employee emp;
        while (inFile >> emp.surname >> emp.birthYear) {
            employees.push_back(emp);
        }
        inFile.close();
        std::cout << "Считано успешно.\n";
    }
    else {
        std::cout << "Не удалось открыть файл для чтения.\n";
    }
}


void calculateTotalEmployees() {
    std::cout << "Всего сотрудников: " << employees.size() << std::endl;
}

void calculateEmployeesPerYear() {
    std::map<int, int> employeesPerYear;
    for (const auto& emp : employees) {
        employeesPerYear[emp.birthYear]++;
    }

    for (const auto& pair : employeesPerYear) {
        std::cout << " " << pair.first << ": " << pair.second << " employees\n";
    }
}

bool compareBySurname(const Employee& a, const Employee& b) {
    return a.surname < b.surname;
}

bool compareByBirthYear(const Employee& a, const Employee& b) {
    return a.birthYear < b.birthYear;
}

void sortAlphabetically() {
    std::sort(employees.begin(), employees.end(), compareBySurname);
}

void sortByBirthYear() {
    std::sort(employees.begin(), employees.end(), compareByBirthYear);
}

void displayList() {
    int currentYear = -1;
    for (const auto& emp : employees) {
        if (emp.birthYear != currentYear) {
            currentYear = emp.birthYear;
            std::cout << " " << currentYear << std::endl;
        }
        std::cout << "  " << emp.surname << std::endl;
    }
}

int main() {
    setlocale(0, "");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    int choice;
    do {
        std::cout << "1. Ввод данных\n";
        std::cout << "2. Чтение данных из файла\n";
        std::cout << "3. Запись данных в файл\n";
        std::cout << "4. Вывод данных на экран\n";
        std::cout << "5. Сортировка по фамилии\n";
        std::cout << "6. Группировка по году\n";
        std::cout << "7. Количество сотрудников\n";
        std::cout << "8. Закрыть консоль\n";
        std::cout << "Ведите номер операции: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inputData();
            break;
        case 2:
            readDataFromFile();
            break;
        case 3:
            saveDataToFile();
            break;
        case 4:
            displayList();
            break;
        case 5:
            sortAlphabetically();
            break;
        case 6:
            sortByBirthYear();
            break;
        case 7:
            calculateTotalEmployees();
            break;
        case 8:
            std::cout << "Работа окончена\n";
            break;

        default:
            std::cout << "Не верный номер операции\n";
        }
    } 
    while (choice != 8);

    return 0;
}