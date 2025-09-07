#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle{
private:
    int id;
    std::time_t dateEntry;
public:
    Vehicle(int id_);
    virtual ~Vehicle();
    int getID();
    virtual int getParkingDurationInSeconds();
    int getParkingDuration();
};
#endif