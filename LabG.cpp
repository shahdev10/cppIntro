/* Lowest Number = 2
Highest Number = 144
Total = 160
Average = 40
*/

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

double sumFunc(vector<double> arr, int arrSize); 

int main()
{
    vector<double> numbers;
    ifstream inputFile;


    inputFile.open("/Users/shahfamily/git/cppIntro/numbers.txt");

    if (inputFile)
    {

        int file_number;

        while(inputFile >> file_number)
            numbers.push_back(file_number);

        inputFile.close();
    }
    else
    {
        cout << "Invalid file." << endl;
        exit(EXIT_SUCCESS);
    }
    
    double lowest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] <= lowest_number)
            lowest_number = numbers[i];
    cout << "Lowest Number = " << lowest_number << endl;

    double highest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] >= highest_number)
            highest_number = numbers[i];
    cout << "Highest Number = " << highest_number << endl;


    int size = numbers.size();
    double total;
    total = sumFunc(numbers, size);

    double average = total / size;
    cout << "Average = " << average << endl;

    return 0;
}

double sumFunc(vector<double> arr, int arrSize) {
    double total = arr[0];
    for (int i = 1; i < arrSize; i++) {
        total += arr[i];    
    }
    cout << "Total = " << total << endl;
    return total;
}

