#include "Car.h"
#include "SportsCar.h"

int main(void)
{
    // Car
    Car myCar(50, "K3", 4);    // 초기 변수 상태
    Car yourCar(100, "K5", 3); // 추가상수
    myCar.display();
    yourCar.display();
    myCar.whereAMI();
    yourCar.whereAMI();

    // SportsCar
    SportsCar scar;
    scar.speedUP();
}