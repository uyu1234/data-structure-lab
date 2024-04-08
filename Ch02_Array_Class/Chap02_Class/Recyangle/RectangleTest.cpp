#include "Rectangle.h"

int main(void)
{
    Rectangle r(10, 20);
    double perimetar = r.getPerimetar();
    std::cout << "Rectangle 1" << std::endl;
    std::cout << "Area:" << r.getArea() << std::endl;
    std::cout << "Perinmeter: " << r.getPerimetar() << std::endl;
    std::cout << "is Square? " << std::boolalpha << r.isSquare() << std::endl;
}