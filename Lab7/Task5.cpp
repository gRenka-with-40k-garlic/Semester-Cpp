#include <Tasks.h>


class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
            throw std::invalid_argument("Недопустимые значения часов, минут или секунд");
        }
    }

    void setTime(int h, int m, int s) {
        if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
            throw std::invalid_argument("Недопустимые значения часов, минут или секунд");
        }
        hour = h;
        minute = m;
        second = s;
    }

    void changeTime(int h, int m, int s) {
        hour = (hour + h) % 24;
        minute = (minute + m) % 60;
        second = (second + s) % 60;
    }

    void printTime() {
        std::cout << "Время: " << hour << ":" << minute << ":" << second << std::endl;
    }
};

void Task5Function() {
    try {
        Time currentTime(10, 30, 45);
        currentTime.printTime();

        currentTime.setTime(12, 45, 30);
        currentTime.printTime();

        currentTime.changeTime(3, 20, 10);
        currentTime.printTime();
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
}