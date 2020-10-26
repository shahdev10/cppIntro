#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void calcSum(char *ptr);

int main()
{
    char digitString[10];
    cout << "Enter a string of digits: ";
    cin.getline(digitString, 10);

    calcSum(digitString);

    return 0;
}

void calcSum(char *ptr)
{
    int max = 0;
    int min = 9;
    int sum = 0;

    int number = atoi(ptr);

    while(number > 0)
    {
        sum += number % 10;
        if(number % 10 > max)
        {
            max = number % 10;
        }
        if(number % 10 < min)
        {
            min = number % 10;
        }
        number /= 10;
    }
    cout << "The max digit is " << max << "." << endl;
    cout << "The min digit is " << min << "." << endl;
    cout << "the sum is " << sum << "." << endl;
}
