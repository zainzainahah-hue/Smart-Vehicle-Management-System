#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

// تنفيذ الدالة الصديقة (هنا يتم التنفيذ الفعلي)
void applySpecialDiscount(Vehicle& v) {
    v.rentalPrice *= 0.8; // خصم 20%
}

int main() {
    Vehicle* garage[2];

    garage[0] = new Car("BMW", "2024", 500, 4);
    garage[1] = new Truck("Volvo", "FH16", 800, 20);

    cout << "--- Smart Rental System ---" << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Vehicle " << i + 1 << " Rent: " << garage[i]->calculateRent() << "$" << endl;
    }

    cout << "\nApplying 20% Discount to BMW..." << endl;
    applySpecialDiscount(*garage[0]);
    cout << "New Rent for BMW: " << garage[0]->calculateRent() << "$" << endl;

    for (int i = 0; i < 2; i++) {
        delete garage[i];
    }

    return 0;
}