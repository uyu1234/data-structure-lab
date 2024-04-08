#pragma once

#include <cstdio>
#include <cstring>

class Car
{
protected:
    int speed;
    char name[40];

public:
    int gear;
    Car() {}
    ~Car() {}
    Car(int s, const char *n, int g)
        : speed(s), gear(g)
    {
        strcpy(name, n);
    }

    void input_S()
    {
        printf("속도: ");
        scanf("%1f", &speed);
    }

    void chagneGear(int g = 4)
    {
        gear = g;
    }

    void speedUP()
    {
        speed += 5;
    }

    void display()
    {
        printf("[%s] : 기어=%d단 속도=%dkmph\n", name, gear, speed);
    }

    void whereAMI()
    {
        printf("객채주소=%x\n", this); // 메모리주소가 this에 저장되어있음. C언어에서 이미 지정되어있는 변수.
    }
};