/*
 * Enter a number between 1 and 10
3

Too low, try again
Enter a number between 1 and 10
5

Correct! You got it in 2 attempts.
Do you want to play again? Enter 1 for yes, 0 for no:
1

Enter a number between 1 and 10
7

Too high, try again
Enter a number between 1 and 10
3

Too high, try again
Enter a number between 1 and 10
2

Too high, try again
Enter a number between 1 and 10
1

Correct! You got it in 4 attempts.
Do you want to play again? Enter 1 for yes, 0 for no:
1

Enter a number between 1 and 10
10

Too high, try again
Enter a number between 1 and 10
1

Too low, try again
Enter a number between 1 and 10
5

Too high, try again
Enter a number between 1 and 10
2

Too low, try again
Enter a number between 1 and 10
4

Too high, try again
Enter a number between 1 and 10
3

Correct! You got it in 6 attempts.
Do you want to play again? Enter 1 for yes, 0 for no:
0
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randNum(){
    return (rand() % 10) + 1;
}

int main(){
    int x = 1;
    while (x != 0){
        unsigned seed = time(0);
        srand(seed);
        int rNum;
        rNum = randNum(); 
        int input;
        int i = 1;
        while (input != rNum){
            cout << "Enter a number between 1 and 10 \n";
            cin >> input; 
            cout << endl;
            if (input > rNum) {
                cout << "Too high, try again \n";
                i++;
            }
            else if (input < rNum){
                cout << "Too low, try again \n";
                i++;
            }
            else if (input == rNum){
                cout << "Correct! You got it in " << i << " attempts.\n";
            }
        }
        cout << "Do you want to play again? Enter 1 for yes, 0 for no: \n";
        cin >> x;
        cout << endl;
    }
}
