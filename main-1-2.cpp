#include <iostream>
#include <string>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    ParkingLot lot(10);

    while (lot.getCount() < 10){
        std::string type;
        int id;
        std::cout << "Enter type (car/bus/bike) and ID: ";
        std::cin >> type >> id;
        if (type == "car") lot.parkVehicle(new Car(id));
        else if (type == "bus") lot.parkVehicle(new Bus(id));
        else lot.parkVehicle(new Motorbike(id));
    }

    int removeId;
    std::cout << "Enter ID to unpark: ";
    std::cin >> removeId;
    lot.unparkVehicle(removeId);

    std::cout << "Number of vehicles left: " << lot.getCount() << std::endl;
    return 0;
}