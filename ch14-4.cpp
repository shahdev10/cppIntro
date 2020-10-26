#include <iostream>
#include <string>
using namespace std;

class NumDays
{
private:
    double hours;
    double days;

public:
    NumDays (double h = 0)
    {
        hours = h;
        days = h / (8.00);
    }

    // getter functions
    double getHours ()
    {
        return hours;
    }

    double getDays ()
    {
        return days;
    }
    
    // setter functions
    void setHours (double h)
    {
        hours = h;
        days = h / (8.00);
    }

    void setDays (double d)
    {
        days = d;
        hours = d * (8.00);
    }

    // operator overload
    double operator+ (const NumDays &right)
    {
        return hours+right.hours;
    }

    double operator- (const NumDays &right)
    {
        if (hours < right.hours)
        {
            cout << "Error, now terminating\n";
            exit (0);
        }
        return hours-right.hours;
    }

    NumDays operator++ ()
    {
        ++hours;
        days = hours / (8.00);
        return *this;
    }

    NumDays operator++ (int)
    {
        hours++;
        days = hours / (8.00);
        return *this;
    }

    NumDays operator-- ()
    {
        --hours;
        days = hours / (8.00);
        return *this;
    }

    NumDays operator-- (int)
    {
        hours--;
        days = hours / (8.00);
        return *this;
    }
};

int main ()
{
    cout << "Creating object with 12 hours...\n";
    NumDays obj1(12);
    cout << obj1.getHours() << " hours = " << obj1.getDays() << " days.\n";

    cout << "Creating object with 18 hours...\n";
    NumDays obj2(18);
    cout << obj2.getHours() << " hours = " << obj2.getDays() << " days.\n";

    cout << "Adding hours..." << obj1 + obj2 << " hours.\n\n";
    cout << "Subtracting hours..." << obj2 - obj1 << " hours. \n\n";

    return 0;
}
