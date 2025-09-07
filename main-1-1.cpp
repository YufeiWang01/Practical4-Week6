#include <iostream>
#include <thread>
#include <chrono>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    int n;
    std::cout << "How many vehicles? ";
    std::cin >> n;
    if (n <= 0 || n > 100) return 0;

    Vehicle* lot[100];

    for (int i = 0; i < n; i++){
        std::string type;
        int id;
        std::cout << "Enter type (car/bus/bike) and ID: ";
        std::cin >> type >> id;
        if (type == "car") lot[i] = new Car(id);
        else if (type == "bus") lot[i] = new Bus(id);
        else lot[i] = new Motorbike(id);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\nParking durations (with discount):\n";
    for (int i = 0; i < n; i++) {
        std::cout << "ID " << lot[i]->getID()
                  << " -> " << lot[i]->getParkingDuration()
                  << " seconds\n";
    }

    for (int i = 0; i < n; i++) delete lot[i];
    return 0;
}