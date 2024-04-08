#pragma once
#include "Car.h"

class SportsCar : public Car
{
public:
    bool bTurbo; // Turbo ON?
    void setTurbo(bool bTur)
    {
        bTurbo = bTur;
    }
    void speedUP() // 오버라이딩. 같은 이름의 객체를 사용한 걸 그렇게 말함.
    {
        if (bTurbo)
            speed += 20;
        else
            Car::speedUP();
    }
};