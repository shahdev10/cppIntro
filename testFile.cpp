#include <iostream>
using namespace std;

//function prototypes
void displayNumbers(int[], int);
int selectionSort(int[], int);
int bubbleSort(int[], int);

int main()
{
    //declare and initialize first int array
    int numbers1[20] = {15, 20, 61, 95, 177,
                       5431, 1234, -4543, 452, -51,
                       985, 421, -5, 0, 14,
                       951, -6765, 19654, 5, 41};

    //declare and initialize second identical int array
    int numbers2[20] = {15, 20, 61, 95, 177,
                       5431, 1234, -4543, 452, -51,
                       985, 421, -5, 0, 14,
                       951, -6765, 19654, 5, 41};

    //display info
    cout << "This program will print the number of exchanges\n";
    cout << "that bubble sort and selection sort will perform to find\n";
    cout << "sort array in ascending order.\n\n";

    //call function to display array so the user gets to see
    //that they are very unordered
    displayNumbers(numbers1, 20);

    //print information for bubble sort
    cout << "\nNow performing bubble sort...\n";
    cout << "It took bubble sort " << bubbleSort(numbers1, 20) << " exchanges to finish!\n\n";

    //print information for selection sort
    cout << "Now performing selection sort...\n";
    cout << "It took selection sort " << selectionSort(numbers2, 20) << " exchanges to finish!\n";

    //return 0 to mark successful termination
    return 0;
}

int selectionSort(int numbers[], int arraySize){
    //will sort in ASCENDING order

    //declare accumulator to keep track
    //of number of exchanges
    int exchangeCounter = 1;

    //declare variables to start from beginning of array
    //and to store the temporary minimum value and index
    int startScan, minValue, minIndex;

    //begin looping on all elements until second to last
    for(startScan = 0; startScan < arraySize-1; startScan++){
        //initialize minValue and minIndex to first element
        minValue = numbers[startScan];
        minIndex = startScan;
        //loop on all remaining elements of array
        for(int index = startScan+1; index < arraySize; index++){
            //check if current element is less than current minValue
            if(numbers[index] < minValue){
                //update minValue and minIndex to
                //respective values of current element
                minValue = numbers[index];
                minIndex = index;
            }
        } //inner for loop ends here
        //check if minIndex has not been updated
        //if so, then continue to next iteration without
        //performing the swap
        if(minIndex == startScan)
            continue;
        //put the lowest element to its final position
        numbers[minIndex] = numbers[startScan];
        //put the first value to the one that was occupied by lowest
        numbers[startScan] = minValue;
        //increment counter only if exchange has happened
        exchangeCounter++;
    }
    return exchangeCounter;
}

void displayNumbers(int numbers[], int arraySize){
    //loop on all months and their rainfalls
    for(int counter = 0; counter < arraySize; counter++){
        cout << numbers[counter] <<  endl;
    }
}

int bubbleSort(int numbers[], int arraySize){
    //declare accumulator variable to keep track
    //of number of changes
    int exchangeCounter = 1;

    bool swapped;
    int temp;
    do{
        swapped = false;
        for(int counter = 0; counter < arraySize-1; counter++){
            if(numbers[counter] > numbers[counter+1]){
                temp = numbers[counter];
                numbers[counter] = numbers[counter+1];
                numbers[counter+1] = temp;
                swapped = true;
                exchangeCounter++;
            }
        }
    } while(swapped);
    return exchangeCounter;
}
