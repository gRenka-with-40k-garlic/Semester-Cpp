#include "Tasks.h"

//Задание 4. Подсчет количества символов, строк и слов в текстовом файле
//Имеется текстовый файл.Посчитать сколько содержится в файле символов, строк и слов.
//Разделителями слов считать пробелы и перенос строки.
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

    std::cout << "Символов:" << symbolsCounter << std::endl; // 282
    std::cout << "Строк:" << linesCounter << std::endl; // 21
    std::cout << "Слов" << wordsCounter << std::endl; // 33

    //https://text.ru/seo
    //сюда я загрузила текст, результаты:
    //Всего символов 282
    //Без пробелов 250
    //Кол - во слов 33

}