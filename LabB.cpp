/*
Name: Dev Shah

Enter these single-word-values separated by space:
 name age city college_name profession animal_type pet_name
Dev 18 Cupertino DeAnza Engineer Dog Snoopy
There once was a person named Dev who lived in the city of Cupertino.
At the age of 18, Dev went to college at DeAnza.
Dev graduated and went to work as Engineer.
Then Dev adopted a/n Dog named Snoopy.
They both lived happily ever after.
*/
#include <iostream>

using namespace std;

int main() {
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string petName;

    cout << "Enter these single-word-values separated by space:\n name age city college_name profession animal_type pet_name\n" ;
    cin >> name;
    cin >> age;
    cin >> city;
    cin >> college;
    cin >> profession;
    cin >> animal;
    cin >> petName;

    cout << "There once was a person named " << name << " who lived in the city of "
    << city << ".\nAt the age of " << age << ", " << name << " went to college at "
    << college << ".\n" << name << " graduated and went to work as " << profession 
    << ".\nThen " << name <<" adopted a/n " << animal << " named " << petName
    << ".\nThey both lived happily ever after." ;
    return 0;
    
    
}
