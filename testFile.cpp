/*Write complete C++ code for a program that defines and calls a function displayPattern that displays the following pattern. Function displayPattern should take one parameter/argument of type int that specifies the number of lines to print in the pattern below and it returns nothing.  Call displayPattern(5) from main to print the following pattern. 

+
++
+++
++++
+++++

#include <iostream>
using namespace std;

void displayPattern(int);

int main (){
    cout<< "Enter the number of times you want the pattern to be displayed: \n";
    int input;
    cin >> input;
    cout << endl;
    displayPattern(input);
}

void displayPattern(int x){
    int i = 1;
    int j = 1;
    while (i <= x){
        for (int y = 0; y == i; y++){
            cout << "+";
        } 
        cout << endl;
        i++;

    }
}

#include <iostream> using namespace std; void displayPattern(int);int main (){cout<< "Enter the number of times you want the pattern to be displayed: \n";int input;cin >> input;cout << endl;displayPattern(input);}void displayPattern(int x){for (int i = 0; i<x; i++){for (int j = 0; j <=i, j++){cout << "+";}cout << endl;}}*/

#include <iostream>
using namespace std;
int main()
{
    char asciiCodeNumber;

    for (int i = 0; i <= 127; i++)
    {
        asciiCodeNumber = i;
        cout << asciiCodeNumber << " ";

        if (i % 16 == 0)
            cout << endl;
    }
    cout << endl
         << endl;

    return 0;
}
