#include<iostream>

using namespace std;

void displayBackward(char *);

int main()
{
    char string[50];
    cout << "Enter a string: ";
    cin.getline(string, 50);

    displayBackward(string);
    return 0;
}

void displayBackward(char *ptr)
{
    for (int counter = strlen(ptr) - 1; counter >= 0; counter--)
    {
        cout << ptr[counter];
    }
    cout << endl;
}
