/* Enter 1 for rock, 2 for paper, 3 for scissors:
2

Computer chooses paper
Game is a tie!
Do you want to play again, 1 for yes, 0 for no
1
Enter 1 for rock, 2 for paper, 3 for scissors:
4

Error, please enter a number within the boundaries.
Enter 1 for rock, 2 for paper, 3 for scissors:
2

Computer chooses rock
You win!
Do you want to play again, 1 for yes, 0 for no
1
Enter 1 for rock, 2 for paper, 3 for scissors:
3

Computer chooses rock
Computer wins, better luck next time.
Do you want to play again, 1 for yes, 0 for no
0
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int rock = 1, paper = 2, scissors = 3;

// add function prototypes here
int randomGen(int);
int getUserInp(int);
void displayCompChoice(int);
void playGame(int, int);

int main (){
    int compInp, userInp, playAgain = 1;
    do {
        compInp = randomGen(compInp);
        //cout << compInp << endl;
        userInp = getUserInp(userInp);
        //cout << userInp << endl;
        displayCompChoice(compInp);
        playGame(compInp, userInp);
        cout << "Do you want to play again, 1 for yes, 0 for no\n";
        cin >> playAgain;
    }
    while (playAgain == 1);
    return 0;
}

int randomGen(int compInp){
    unsigned seed = time(0);
    srand(seed);
    return(rand() % (scissors - rock + 1)) + rock;
}

int getUserInp(int userInp) {
    do {
        cout << "Enter 1 for rock, 2 for paper, 3 for scissors: \n";
        cin >> userInp;
        cout << endl;
        if(userInp < 1 || userInp > 3){
            cout << "Error, please enter a number within the boundaries. \n";
        }
    }
    while(userInp < 1 || userInp > 3);
    return userInp;
}

void displayCompChoice(int compInp){
    if(compInp == rock){
        cout << "Computer chooses rock\n";
    }
    else if(compInp == paper){
        cout << "Computer chooses paper\n";
    }
    else {
        cout << "Computer chooses scissors\n";
    }

}

void playGame(int compInp, int userInp){
    if (compInp == rock){
        if (userInp == rock){
            cout << "Game is a tie!\n";
        }
        else if (userInp == paper){
            cout << "You win!\n";
        }
        else {
            cout << "Computer wins, better luck next time. \n";
        }
    }
    else if (compInp == paper){
        if (userInp == rock){
            cout << "Computer wins, better luck next time. \n";
        }
        else if (userInp == paper){
            cout << "Game is a tie!\n";
        }
        else {
            cout << "You win!\n";
        }
    }
    else {
        if (userInp == rock){
            cout << "You win!\n";
        }
        else if (userInp == paper){
            cout << "Computer wins, better luck next time. \n";
        }
        else {
            cout << "Game is a tie!\n";
        }
    }
}
