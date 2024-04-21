#pragma once
#include <iostream>  //input outout 쉽게 사용
#include <string>    //문자열
using namespace std; // 선언으로 인해 굳이 std언급 안해도 된대

// SmartHome
class SmartHome
{
private:
    // 클래스 변수들(class member, attribute, field, variable, or...) <<시험에 나옴
    string owner;    // 문자열
    int temperature; // 정수형
    int humidity;
    bool security; // true or false

public:
    // 클래스 함수들(class method, function) <<시험에 나옴

    SmartHome(string owner, int temperature, int humidity, bool security) // 생성자
    {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }

    // Parmeter, Argument
    // 위의 SmartHome와 완전히 같은 함수.
    // SmartHome(string o, int t, int h, bool sec)
    // :temperature(t), humidity(h), security(sec){
    //    strcpy(owner, o);
    // }

    // 소멸자=
    //~SmartHome() {}

    void setTemperature(int temperature)
    {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) // 입력잇어야함
    {
        this->humidity = humidity;
    }
    void setSecurity(bool security) // 반환값 없음
    {
        this->security = security;
    }
    string getOwner() // string<반환값을 만들어야함. 입력없어도됨
    {
        return this->owner;
    }
    int getTemperature()
    {
        return this->temperature;
    }
    int getHumidity()
    {
        return this->humidity;
    }
    bool getSecurity()
    {
        return this->security;
    }
    void printStatus() // 입력도 없고 출력도 없는 함수.
    {
        cout << ": " << this->owner << endl;
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security)
        {
            cout << " security on" << endl;
        }
        else
        {
            cout << "security off" << endl;
        }
    }
};