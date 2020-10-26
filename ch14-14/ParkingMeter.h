#ifdef PARKINGMETER_H
#define PARKINGMETER_H

#include <iostream>
#include <string>

using namespace std;

class ParkingMeter
{
private:
    int purchasedMinutes;
public:
    ParkingMeter (int pm = 0)
    {
        if (pm < 0)
        {
            cout << "Error, invalid input. Terminating\n";
            exit (EXIT_FAILURE);
        }
        purchasedMinutes = pm;
    }

    // getter function
    int getPurchasedMinutes () const
    {
        return purchasedMinutes;
    }

    // setter function
    void setPurchasedMinutes (int pm)
    {
        if (pm < 0)
        {
            cout << "Error, invalid input. Terminating\n";
            exit (EXIT_FAILURE);
        }
        purchasedMinutes = pm;
    }

};

#endif
