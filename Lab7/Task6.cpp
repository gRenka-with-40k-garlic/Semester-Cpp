#include <Tasks.h>



class Point {
public:
    double x;
    double y;

    Point(double _x, double _y) : x(_x), y(_y) {}
};

class Triangle {
private:
    Point A;
    Point B;
    Point C;

public:
    Triangle(Point _A, Point _B, Point _C) : A(_A), B(_B), C(_C) {}

    // Метод для вычисления длины стороны треугольника
    double calculateSideLength(Point p1, Point p2) {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

    // Метод для вычисления площади треугольника по формуле Герона
    double calculateArea() {
        double a = calculateSideLength(A, B);
        double b = calculateSideLength(B, C);
        double c = calculateSideLength(C, A);
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Метод для вычисления периметра треугольника
    double calculatePerimeter() {
        double a = calculateSideLength(A, B);
        double b = calculateSideLength(B, C);
        double c = calculateSideLength(C, A);
        return a + b + c;
    }

    // Метод для вычисления точки пересечения медиан
    Point calculateCentroid() {
        double centroidX = (A.x + B.x + C.x) / 3;
        double centroidY = (A.y + B.y + C.y) / 3;
        return Point(centroidX, centroidY);
    }

    // Метод для получения состояния объекта
    void printTriangle() {
        std::cout << "Треугольник с вершинами A(" << A.x << ", " << A.y << "), B(" << B.x << ", " << B.y << "), C(" << C.x << ", " << C.y << ")" << std::endl;
    }
};

void Task6Function() {
    Point pointA(0, 0);
    Point pointB(4, 0);
    Point pointC(0, 3);

    Triangle triangle(pointA, pointB, pointC);

    triangle.printTriangle();
    std::cout << "Площадь треугольника: " << triangle.calculateArea() << std::endl;
    std::cout << "Периметр треугольника: " << triangle.calculatePerimeter() << std::endl;

    Point centroid = triangle.calculateCentroid();
    std::cout << "Точка пересечения медиан: (" << centroid.x << ", " << centroid.y << ")" << std::endl;
}