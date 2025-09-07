#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** spaces;
    int capacity;
    int current;
public:
    ParkingLot(int cap);
    ~ParkingLot();
    int getCount();
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int id);
    int countOverstayedVehicles(int seconds);
    int countOverstayingVehicles(int seconds);
};
#endif