#include "Tasks.h"

//������� 3. ����������, ������� ��� � ������ ����������� �������� �����
//��� ��������� ���� � ������� �����������.�������� ���������, ������� ���������� ���������� ����������, ������������ � ������������ �������.������� �� ���������� �� �����.strcmp, strstr
//������ ��������������� ����� :
//�����������
//������(����.)
//������(���.)
//�������(�����.)
//
//�������
//���������(����.)
//������(�����.)
//������(���.)
//�����������(�����.)
//
//�����
//�������(����.)
//�������(�����.)
//���������(�����.)
//
//�������
//������ �����(����.)
//�������������(���.)
//����������(����.)
//�����������(�����.)
//
//������ ������ ��������� :
//������: 5
//������������ : 6
//������������ : 3


void Task3Function(const std::string& filename) {
	setlocale(LC_ALL, "");
	std::fstream file(filename);
	std::string line;

	int labCount = 0;
	int lectureCount = 0;
	int practiceCount = 0;

	while (std::getline(file, line)) {
		if (line.find("(���.)") != std::string::npos) {

			labCount++;

		}
		else if (line.find("(�����.)") != std::string::npos) {

			practiceCount++;

		}
		else if (line.find("(����.)") != std::string::npos) {

			lectureCount++;

		}
	}
	std::cout << "�� ���� ������" << std::endl;
	std::cout << "������:" << labCount << std::endl;
	std::cout << "������������:" << lectureCount << std::endl;
	std::cout << "������������:" << practiceCount << std::endl;
}