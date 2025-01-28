#include "Tasks.h"

//Задание 3. Определить, сколько раз в тексте встречаются заданные слова
//Дан текстовый файл с учебным расписанием.Написать программу, которая определяет количество лекционных, практических и лабораторных занятий.Вывести их количество на экран.strcmp, strstr
//Пример обрабатываемого файла :
//Понедельник
//Физика(лекц.)
//Физика(лаб.)
//Алгебра(практ.)
//
//Вторник
//Геометрия(лекц.)
//Физика(практ.)
//Физика(лаб.)
//Физкультура(практ.)
//
//Среда
//Алгебра(лекц.)
//Алгебра(практ.)
//Геометрия(практ.)
//
//Четверг
//Теория струн(лекц.)
//Моделирование(лаб.)
//Психология(лекц.)
//Физкультура(практ.)
//
//Пример работы программы :
//Лекций: 5
//Практических : 6
//Лабораторных : 3


void Task3Function(const std::string& filename) {
	setlocale(LC_ALL, "");
	std::fstream file(filename);
	std::string line;

	int labCount = 0;
	int lectureCount = 0;
	int practiceCount = 0;

	while (std::getline(file, line)) {
		if (line.find("(лаб.)") != std::string::npos) {

			labCount++;

		}
		else if (line.find("(практ.)") != std::string::npos) {

			practiceCount++;

		}
		else if (line.find("(лекц.)") != std::string::npos) {

			lectureCount++;

		}
	}
	std::cout << "На этой неделе" << std::endl;
	std::cout << "Лекций:" << labCount << std::endl;
	std::cout << "Практических:" << lectureCount << std::endl;
	std::cout << "Лабораторных:" << practiceCount << std::endl;
}