#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>

using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee(string n, int id, string d, string p)
    {
        name = n;
        idNumber = id;
        department = d;
        position = p;
    }

    Employee(string n, int id)
    {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    
    //getter functions
    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return idNumber;
    }
    string getDepartment() const
    {
        return department;
    }
    string getPosition() const
    {
        return position;
    }
    
    //setter functions
    void setName(string n)
    {
        if(n.size() == 0)
        {
            cout << "No empty strings allowed" << endl;
            return;
        }
        else
        {
            name = n;
        }
    }

    void setId(int id)
    {
        if(id < 0)
        {
            cout << "Invalid ID number" << endl;
            return;
        }
        else
        {
            idNumber = id;
        }
    }

    void setDepartment(string d)
    {
        if(d.size() == 0)
        {
            cout << "No empty strings allowed" << endl;
            return;
        }
        else
        {
            department = d;
        }
    }

    void setPosition(string p)
    {
        if(p.size() == 0)
        {
            cout << "No empty strings allowed" << endl;
            return;
        }
        else
        {
            position = p;
        }
    }
};

#endif
