#include "Tasks.h"

//������� 2 ����� ����� ���� �����, ���������� � ����
//��� ��������� ����, � ������� ����� ������ �������� ����������� �����.������� �� ����� ����� ���� ������� �����.
//������
//���� : 21  35  456  7  89
//���������: 21 = 3   35 = 8   456 = 15   7 = 7   89 = 17



int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void Task2Function(const std::string& filename){
    std::fstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int num;
        while (iss >> num) {
            std::cout << num << "=" << sumOfDigits(num) << "  ";    
        }
    }
}
