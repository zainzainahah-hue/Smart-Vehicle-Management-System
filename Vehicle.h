#pragma once // لضمان عدم تكرار التعريف
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected: // لكي يراها الأبناء والدالة الصديقة
    string model;
    string brand;
    double rentalPrice;

public:
    Vehicle() : model(""), brand(""), rentalPrice(0) {}
    Vehicle(string m, string b, double r) : model(m), brand(b), rentalPrice(r) {}

    virtual double calculateRent() = 0; // دالة نقية (Abstract)
    virtual ~Vehicle() {} // مدمر افتراضي بأقواس

    // تصريح الصداقة (بدون تنفيذ هنا)
    friend void applySpecialDiscount(Vehicle& v);
};