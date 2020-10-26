#include<iostream>
#include<string>

using namespace std;

struct MovieData
{
    string title;
    string director;
    int releaseYear;
    int runTime;
};

void printInfo(const MovieData &);

int main()
{
    MovieData movie1 = {"ABC", "David", 2010, 130};

    MovieData movie2;
    cout << "Movie title: ";
    getline(cin, movie2.title);
    cout << "Director: ";
    getline(cin, movie2.director);
    cout << "Release year: ";
    cin >> movie2.releaseYear;
    cout << "Runtime: ";
    cin >> movie2.runTime;
    cout << endl;

    cout << "Displaying info for 1st movie: " << endl;
    printInfo(movie1);
    cout << "Displaying info for 2nd movie: " << endl;
    printInfo(movie2);

    return 0;
}

void printInfo(const MovieData &movie)
{
    cout << "Title: " << movie.title;
    cout << "\nDirector: " << movie.director;
    cout << "\nRelease Year: " << movie.releaseYear;
    cout << "\nRun Time: " << movie.runTime;
    cout << endl;

}
