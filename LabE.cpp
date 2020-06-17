/*
* Enter a month from 1 - 12:
2

Enter a year:
2008

This month has 29 days
Do you want to run program again? Press 1 for yes, 0 for no:
1

Enter a month from 1 - 12:
2

Enter a year:
2019

This month has 28 days
Do you want to run program again? Press 1 for yes, 0 for no:
1

Enter a month from 1 - 12:
2

Enter a year:
2020

This month has 29 days
Do you want to run program again? Press 1 for yes, 0 for no:
1

Enter a month from 1 - 12:
8

This month has 31 days
Do you want to run program again? Press 1 for yes, 0 for no:
1

Enter a month from 1 - 12:
9

This month has 30 days
Do you want to run program again? Press 1 for yes, 0 for no:
0
*/


#include <iostream>
using namespace std;

void isLeapYear(int);

int main () {
    int month;
    int counter = 1;
    while (counter !=0){
    cout << "Enter a month from 1 - 12: \n";
    cin >> month;
    cout << endl;
    if (month == 2){
        int year;
        cout << "Enter a year: \n";
        cin >> year;
        cout << endl;
        isLeapYear(year);
    }
    else if (month < 8 && month%2 != 0) {
        cout << "This month has 31 days \n";
    }
    else if (month > 7 && month % 2 == 0){
        cout << "This month has 31 days \n";
    }
    else if (month < 8 && month % 2 == 0){
        cout << "This month has 30 days \n";
    }
    else if (month > 7 && month % 2 != 0){
        cout << "This month has 30 days\n";
    }
    cout << "Do you want to run program again? Press 1 for yes, 0 for no: \n";
    cin >> counter;
    cout << endl;
}
}

void isLeapYear(int x){
    if (x % 100 != 0 && x % 4 == 0){
        cout << "This month has 29 days\n";
    }
    else {
        cout << "This month has 28 days \n";
    }
}


