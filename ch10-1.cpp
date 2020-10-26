#include<iostream>

using namespace std;

int charCount(char *ptr);

int main()
{
    char string[50];
    cout << "Enter a string: ";
    cin.getline(string, 50);

    cout << "The string has " << charCount(string) << " characters." << endl;
    return 0;
}

int charCount(char *ptr)
{
    int counter = 0;
    while (*ptr != '\0')
    {
        counter++;
        ptr++;
    }
    return counter;
}
