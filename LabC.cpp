/*Enter 1st primary color:
yellow

Enter 2nd primary color:
blue

When you mix yellow and blue, you get green!

Enter 1st primary color:
white

Enter 2nd primary color:
orange

You did not enter a prime color. Please run the program again.
*/
#include<iostream>
using namespace std;

int main () {
    string color1, color2;
    cout << "Enter 1st primary color:\n";
    cin >> color1;
    cout << endl;
    cout << "Enter 2nd primary color: \n";
    cin >> color2;
    cout << endl;

    if (color1 == "red" || color1 == "Red"){
        // test comment
        if (color2 == "blue" || color2 == "Blue"){
            cout << "When you mix red and blue, you get purple!\n";
        }
        else if (color2 == "yellow" || color2 == "Yellow"){
            cout << "When you mix red and yellow, you get orange!\n";
        }
    }
    else if (color1 == "blue" || color1 == "Blue") {
        if (color2 == "red" || color2 == "Red") {
            cout << "When you mix blue and red, you get purple!\n";
            }
        else if (color2 == "yellow" || color2 == "Yellow"){
            cout << "When you mix blue and yellow, you get green!\n";
            }
    }
    else if (color1 == "yellow" || color1 == "Yellow"){
        if (color2 == "red" || color2 == "Red"){
            cout << "When you mix yellow and red, you get orange!\n";
            }
        else if (color2 == "blue" || color2 == "Blue"){
            cout << "When you mix yellow and blue, you get green!\n";
            }
        }
    else if (color1 == color2){
        cout << "When you mix " << color1 << " and " << color2 << ", you get " << color1 << "!\n";
        }
    else {
        cout << "You did not enter a prime color. Please run the program again. \n";
    }

    cout << endl;
    return 0;
}
