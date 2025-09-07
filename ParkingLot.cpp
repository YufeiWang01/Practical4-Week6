#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap){
    capacity = cap;
    current = 0;
    spaces = new Vehicle*[capacity];
    for (int i = 0; i < capacity; i++) spaces[i] = 0;
}

ParkingLot::~ParkingLot(){
    delete[] spaces;
}

int ParkingLot::getCount(){
    return current;
}

void ParkingLot::parkVehicle(Vehicle* v){
    if (current >= capacity){
        std::cout << "The lot is full" << std::endl;
        return;
    }
    for (int i = 0; i < capacity; i++){
        if (spaces[i] == 0) {
            spaces[i] = v;
            current++;
            return;
        }
    }
    std::cout << "The lot is full" << std::endl;
}

void ParkingLot::unparkVehicle(int id){
    for (int i = 0; i < capacity; i++){
        if (spaces[i] != 0 && spaces[i]->getID() == id) {
            spaces[i] = 0;
            current--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayedVehicles(int seconds){
    int cnt = 0;
    for (int i = 0; i < capacity; i++){
        if (spaces[i] != 0) {
            if (spaces[i]->getParkingDurationInSeconds() > seconds) cnt++;
        }
    }
    return cnt;
}

int ParkingLot::countOverstayingVehicles(int seconds){
    return countOverstayedVehicles(seconds);
}