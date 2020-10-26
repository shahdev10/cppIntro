#ifdef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <iostream>
#include <string>

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

using namespace std;

// forward declaration of classes
class ParkedCar;
class ParkingMeter;
class PoliceOfficer;

class ParkingTicket
{
private:
    string officerName;
    int badgeNum;
    int fine = 0;

    ParkedCar car;
    ParkingMeter meter;

public:

};
