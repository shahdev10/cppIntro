#include<iostream>
#include<string>
#include"Employee.h"

using namespace std;

int main()
{
    Employee employees[3] = {Employee("Susan Meyers", 52732, "Accounting", "Vice President"),
    Employee("Mark Jones", 39281)};

    employees[1].setDepartment("IT");
    employees[1].setPosition("Programmer");

    employees[2].setName("Joey Roberts");
    employees[2].setId(82873);
    employees[2].setDepartment("Marketing");
    employees[2].setPosition("Manager");

    cout << "Name \t\t ID Number \t Department \t\t Position\n";
    cout << "______________________________________________________________________\n";

    for(int i = 0; i < 3; i++)
    {
        cout << employees[i].getName() << "\t";
        cout << employees[i].getId() << "\t";
        cout << employees[i].getDepartment() << "\t";
        cout << employees[i].getPosition() << "\n";
    }
    return 0;
}
