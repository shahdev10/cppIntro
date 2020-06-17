/*Q2 (last names beginning in O-Z): Write complete C++ program that asks the user to enter temperature in Celsius stored as a floating point number and outputs the temperature value in Fahrenheit as a floating point number. The formula to convert Celsius temperature to Fahrenheit temperature is:

F = 9/5*C + 32

Where F is the Fahrenheit temperature and C is the Celsius temperature.

Sample run:

Enter temperature in Celsius: 25.6

(Program outputs) 25.6 degree Celsius in Fahrenheit is x (you’ll fill in the correct value for x)
*/


#include <iostream>
using namespace std;


int main() {
    int f, c;
    cout << "Enter temperature in Celsius: \n" ;
    cin >> c;
    f = 9*c / 5 + 32;
    cout << endl << c << " degree Celsius in Fahrenheit is " << f << ". \n";
    return 0;
}

