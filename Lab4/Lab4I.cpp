#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

struct Student {
    std::string surname;
    int mathGrade;
    int compGrade;
    int physicsGrade;
};

void saveDataToFile(const std::vector<Student>& students) {
    std::ofstream outFile("exam_results.txt");
    if (outFile.is_open()) {
        for (const auto& student : students) {
            outFile << student.surname << " " << student.mathGrade << " " << student.compGrade << " " << student.physicsGrade << std::endl;
        }
        outFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для записи" << std::endl;
    }
}

void readDataFromFile(std::vector<Student>& students) {
    std::ifstream inFile("exam_results.txt");
    if (inFile.is_open()) {
        students.clear();
        std::string surname;
        int math, comp, physics;
        while (inFile >> surname >> math >> comp >> physics) {
            students.push_back({ surname, math, comp, physics });
        }
        inFile.close();
    }
    else {
        std::cerr << "Не удалось открыть файл для чтения" << std::endl;
    }
}

int main() {
    setlocale(0, "");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    std::cout << "Введите количество студентов: ";
    std::cin >> N;

    std::vector<Student> students(N);

    std::cout << "Введите данные о студенте(фамилию, оценки по: математике, информатике, физике ):" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].surname >> students[i].mathGrade >> students[i].compGrade >> students[i].physicsGrade;
    }

    saveDataToFile(students);

    readDataFromFile(students);

    int count = 0;
    std::cout << "Студенты имеющие хотябы одну 2: " << std::endl;
    for (const auto& student : students) {
        if (student.mathGrade == 2 || student.compGrade == 2 || student.physicsGrade == 2) {
            std::cout << student.surname << std::endl;
            count++;
        }
    }
    std::cout << "Всего студентов имеющих оценку 2: " << count << std::endl;

    return 0;
}