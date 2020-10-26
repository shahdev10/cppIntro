#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int wordCounter(char *ptr);
int wordCounter(string input);

int main()
{
    char inputString[101];
    string input;
    cout << "Enter a string: ";
    cin.getline(inputString, 101);
    cout << "Enter another string: ";
    cin >> input;
    cout << endl;

    cout << "There are " << wordCounter(inputString) << " words in this string." << endl;
    cout << "There are " <<wordCounter(input) << " words in this string." << endl;

    return 0;
}

int wordCounter(char *ptr)
{
    int count = 0;
    int chars = 0;
    while (*ptr != '\0')
    {
        if(isalnum(*ptr) && (*(ptr+1) == ' ' || *(ptr+1) == '\0'))
        {
            count++;
        }
        if(isalnum(*ptr))
        {
            chars++;
        }
        ptr++;
    }
    cout << "Average number of characters per word is " << (double)chars/count << endl;
    return count;
}

int wordCounter(string input)
{
    const char *ptr = input.c_str();
    return wordCounter(ptr);
}
