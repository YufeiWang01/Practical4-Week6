#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDurationInSeconds(){
    int base = Vehicle::getParkingDurationInSeconds();
    return (int)(base * 0.75);
}