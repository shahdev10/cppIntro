#include<iostream>

using namespace std;

int main ()
{
    int winners[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    cout << "Enter code: ";
    int code;
    cin >> code;
    cout << endl;
    
    int first = 0;
    int last = 9;
    int middle;
    bool found = false;

    while (!found && first <=last)
    {
        middle = (first + last)/2;
        if (winners[middle] == code)
        {
            cout << "You are a winner!" << endl;
            return 0;
        }
        else if (winners[middle] > code)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    cout << "Sorry, you are not a winner!" << endl;
    return 1; 
}
