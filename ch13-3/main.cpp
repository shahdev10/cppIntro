#include<iostream>
#include<string>
#include"Car.h"

using namespace std;

int main()
{
    Car car1(2005, "Toyota");

    cout << "Current Speed: ";
    cout << car1.getSpeed() << endl;

    cout << "Accelerating 5 times: " << endl;
    for(int i = 0; i < 5; i++)
    {
        car1.accelerate();
        cout << "Current Speed: ";
        cout << car1.getSpeed() << endl;
    }

    cout << "Braking 5 times: " << endl;
    for(int i = 0; i < 5; i++)
    {
        car1.brake();
        cout << "Current Speed: ";
        cout << car1.getSpeed() << end;
    }

    return 0;
}
