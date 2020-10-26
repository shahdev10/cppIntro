#ifdef PARKEDCAR_H
#define PARKEDCAR_H

#include <iostream>
#include <string>

using namespace std;

class ParkedCar
{
private:
    string make, model, color, licenceNum;
    int minutesParked;
public:
    ParkedCar (string ma = "", string mo = "", string c = "", string l = "", int n = 0)
    {
        if (n < 0)
        {
            cout << "Error! Invalid Parking Time!\n";
            cout << "Terminating program\n";
            exit (EXIT_FAILURE);
        }
        make = ma;
        model = mo;
        color = c;
        licenceNum = l;
        minutesParked = n;
    }

    // getter functions
    string getMake () const
    {
        return make;
    }
    string getModel () const
    {
        return model;
    }
    string getColor () const
    {
        return color;
    }
    string getLicenceNum () const
    {
        return licenceNUm;
    }
    int getMinutesParked () const
    {
        return minutesParked;
    }

    //setter functions
    void setMake (string ma)
    {
        make = ma;
    }
    void setModel (string mo)
    {
        model = mo;
    }
    void setColor (string c)
    {
        color = c;
    }
    void setLicenceNum (string l)
    {
        licenceNum = l;
    }
    void setMinutesParked (int i)
    {
        if (i < 0)
        {  
            cout << "Error! Terminating Program\n";
            exit (EXIT_FAILURE);
        }
        minutesParked = i;
    }

};

#endif
