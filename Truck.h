#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double loadCapacity;
public:
    Truck(string m, string b, double r, double l) : Vehicle(m, b, r), loadCapacity(l) {}

    double calculateRent() override {
        return rentalPrice + (10 * loadCapacity);
    }
};