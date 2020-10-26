#include<iostream>

using namespace std;

int main()
{
    int accounts[18] = {5658845, 3827482, 3810394, 5839203, 8459302, 6584093, 1983782, 537482, 71937294, 8463982, 735648, 154932, 4820423, 91874823, 183820, 20482934, 6190384, 263820};
    int input;
    cout << "Enter an account number: ";
    cin >> input;
    cout << endl;

    for (int i = 0; i < 18; i++)
    {
        if (input == accounts[i])
        {
            cout << "Account number valid." << endl;
            return 0;
        }
    }
    cout << "Account number invalid." << endl;
    return 1;
}

