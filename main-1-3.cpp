#include <iostream>
#include <thread>
#include <chrono>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    ParkingLot lot(5);

    Vehicle* car = new Car(1);
    Vehicle* bus = new Bus(2);
    Vehicle* motorbike = new Motorbike(3);

    lot.parkVehicle(car);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    lot.parkVehicle(bus);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    lot.parkVehicle(motorbike);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    int overstayingCount = lot.countOverstayingVehicles(2);
    std::cout << "Vehicles overstaying more than 2 seconds: " << overstayingCount << std::endl;

    std::cout << "Car duration: " << car->getParkingDuration() << " seconds" << std::endl;
    std::cout << "Bus duration: " << bus->getParkingDuration() << " seconds" << std::endl;
    std::cout << "Motorbike duration: " << motorbike->getParkingDuration() << " seconds" << std::endl;

    return 0;
}