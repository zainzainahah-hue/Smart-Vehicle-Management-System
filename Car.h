#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int carDoors;
public:
    Car(string m, string b, double r, int c) : Vehicle(m, b, r), carDoors(c) {}

    double calculateRent() override {
        return rentalPrice + (5 * carDoors);
    }
};