#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDurationInSeconds(){
    int base = Vehicle::getParkingDurationInSeconds();
    return (int)(base * 0.85);
}