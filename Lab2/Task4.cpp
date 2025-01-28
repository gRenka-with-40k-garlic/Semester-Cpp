#include "Tasks.h"

//������� 4. ������� ���������� ��������, ����� � ���� � ��������� �����
//������� ��������� ����.��������� ������� ���������� � ����� ��������, ����� � ����.
//������������� ���� ������� ������� � ������� ������.
//strlen, getline


void Task4Function(const std::string& filename) {
    setlocale(LC_ALL, "");
	std::fstream file(filename);
	std::string line;
    std::string word;

	int symbolsCounter = 0;
	int linesCounter = 0;
	int wordsCounter = 0;

    while (std::getline(file, line)) {
        symbolsCounter += line.size();
        linesCounter++;
        std::istringstream iss(line);
        while (iss >> word) {
            wordsCounter++;
        }
    }

    std::cout << "��������:" << symbolsCounter << std::endl; // 282
    std::cout << "�����:" << linesCounter << std::endl; // 21
    std::cout << "����" << wordsCounter << std::endl; // 33

    //https://text.ru/seo
    //���� � ��������� �����, ����������:
    //����� �������� 282
    //��� �������� 250
    //��� - �� ���� 33

}