/* Write complete C++ code to display numbers larger than n in an array. In your code, write a function that accepts three arguments: an array, the size of the array, and a number n . Assume that the array contains integers. Call the function in your code. The function should display all of the numbers in the array that are greater than the number n . You could use a named constant for the value of n or collect it from the user.

Sample output is:

Numbers greater than 4 in the array are: 5, 17, 10, 12



#include<iostream>
using namespace std;

// function prototype here
void compareFunc(int arr[5], int arrSize, int userInp);

int main() {
    int user; 
    cout << "Enter a number of your choice: " << endl;
    cin >> user;
    cout << endl;
    int arr[5] = {10, 2, 4, 82, 23};
    int size = sizeof(arr)/sizeof(arr[0]);
    compareFunc(arr, size, user);
}

void compareFunc(int arr[5], int arrSize, int userInp){
    //cout << arrSize << endl << userInp << endl;
    cout << "Numbers greater than " << userInp << " in the array are: " << endl;
    for(int i = 0; i < 5; i++){
        if (arr[i] > userInp){
            cout << arr[i] << endl;
        }
    }
}
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std; 

int main(){
    string magic8arr[12] = {
        "Yes, of course!",
        "Without a doubt, yes.",
        "You can count on it.",
        "For sure!",
        "Ask me later.",
        "I'm not sure.",
        "I can't tell you right now.",
        "I'll tell you afterwards.",
        "No way!",
        "I don't think so.",
        "Without a doubt, no.",
        "The answer is clearly, NO."
    };
    cout << "Feeling lucky? Ask a question:" << endl;
    string question; 
    cin >> question;
    cout << endl;
    unsigned seed = time(0);
    srand(seed);
    int i = (rand() % (12 - 1 + 1)) + 1;
    cout << magic8arr[i] << endl;
}
