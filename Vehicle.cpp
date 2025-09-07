#include "Vehicle.h"

Vehicle::Vehicle(int id_){
    id = id_;
    dateEntry = std::time(nullptr);
}

Vehicle::~Vehicle(){

}

int Vehicle::getID(){
    return id;
}

int Vehicle::getParkingDurationInSeconds(){
    std::time_t now = std::time(nullptr);
    return (int)std::difftime(now, dateEntry);
}

int Vehicle::getParkingDuration(){
    return getParkingDurationInSeconds();
}