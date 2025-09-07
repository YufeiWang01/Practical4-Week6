#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDurationInSeconds(){
    int base = Vehicle::getParkingDurationInSeconds();
    return (int)(base * 0.90);
}