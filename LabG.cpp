/* Create a file named numbers.txt containing numbers each written on a separate line. Assume there are up to 10 numbers in the file. The program should read the contents of the file into an array and then display the following data:

• The smallest number in the array
• The largest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
*/

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    vector<double> numbers;
    ifstream inputFile;


    inputFile.open(/Users/shahfamily/git/cppIntro/numbers.txt);

    if (inputFile)
    {
        // cout << "Valid file." << endl;

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


    double total = 0;
    for (int i = 0; i < numbers.size(); i++)
        total += numbers[i];
    cout << "Total = " << total << endl;

    double average = total / numbers.size();
    cout << "Average = " << average << endl;

    return 0;
}
