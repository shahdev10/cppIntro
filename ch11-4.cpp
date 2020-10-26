#include<iostream>
#include<string>

using namespace std;

struct WeatherData
{
    int rain;
    int highTemp;
    int lowTemp;
    double averageTemp;
};

//add prototypes here
void getData(WeatherData &);
int totalRainfall(const WeatherData [], const int);
void tempAnalysis(const WeatherData[], const int);

const int numMonths = 12;
string monthNames[numMonths] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    WeatherData array[numMonths];
    for(int i = 0; i < numMonths; i++)
    {
        cout << "Enter data for " << monthNames[i] << endl;
        getData(array[i]);
        cout << endl;
    }

    cout << "Yearly total rainfall: ";
    totalRainfall(array, numMonths);
    cout << "\nAverage monthly rainfall: ";
    cout << (double)totalRainfall(array, numMonths)/numMonths << endl;
    tempAnalysis(array, numMonths);

    return 0;
}

void getData(WeatherData & data)
{
    cout << "Enter rain: ";
    cin >> data.rain;
    cout << "Enter High Temp: ";
    cin >> data.highTemp;
    while (data.highTemp < -100 || data.highTemp > 140)
    {  
        cout << "Enter a valid temperature: ";
        cin >> data.highTemp;
    }

    cout << "Enter Low Temp: ";
    cin >> data.lowTemp;
    while(data.lowTemp < -100 || data.lowTemp > 140)
    {
        cout << "Enter a valid temperature: ";
        cin >> data.lowTemp;
    }

    data.averageTemp = (data.lowTemp + data.highTemp)/2.0;
}

int totalRainfall(const WeatherData arr[], const int numElements)
{
    int total = 0;
    for (int i = 0; i < numElements; i++)
    {
        total+= arr[i].rain;
    }
    return total;
}

void tempAnalysis(const WeatherData arr[], const int numElements)
{
    int highTemp = -100;
    int lowTemp = 140;
    int avgTemp = 0;

    for(int i = 0; i < numElements; i++)
    {
        if(arr[i].highTemp > highTemp)
        {
            highTemp = arr[i].highTemp;
        }
        if(arr[i].lowTemp < lowTemp)
        {
            lowTemp = arr[i].lowTemp;
        }
        avgTemp += arr[i].averageTemp;
    }
    cout << "High Temp is: " << highTemp;
    cout << "\nLow Temp is: " << lowTemp;
    cout << "\nAverage Temp is: " << (double)avgTemp/numElements;
    cout << endl;
}


