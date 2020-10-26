#ifdef CAR_H
#define CAR_H

#include<iostream>
#include<string>

using namespace std;

class Car
{
private:
    int year;
    string make;
    int speed = 10;

public:
    Car(int y, string m)
    {
        year = y;
        make = m;
    }

    //getter functions
    int getYear() const
    {
        return year;
    }

    string getMake() const
    {
        return make;
    }

    int getSpeed() const
    {
        return speed;
    }

    //other functions
    void accelerate()
    {
        speed += 5;
    }

    void brake()
    {
        speed -= 5;
    }
};

#endif
