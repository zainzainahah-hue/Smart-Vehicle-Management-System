# 🚗 Smart Vehicle Management System

An advanced C++ project developed to demonstrate core Object-Oriented Programming (OOP) principles. This system manages a fleet of vehicles (Cars and Trucks) and calculates rental prices dynamically based on specific attributes.

## 🌟 Key Features

* Abstraction: Utilized an abstract base class Vehicle with a pure virtual function calculateRent().
* Inheritance: Specialized classes Car and Truck inherit properties and behaviors from the base class.
* Dynamic Polymorphism: Used base class pointers and virtual functions to achieve dynamic binding at runtime.
* Encapsulation: Protected sensitive data members (model, brand, rentalPrice) using appropriate access modifiers.
* Friend Functions: Implemented a special discount system via a friend function to modify protected members.
* Memory Management: Proper allocation and deallocation of memory using new and delete.

## 📂 Project Structure

* Vehicle.h: The abstract base class defining the vehicle template.
* Car.h: Derived class for car-specific rental logic (e.g., number of doors).
* Truck.h: Derived class for truck-specific rental logic (e.g., load capacity).
* Smart Vehicle Mangment System.cpp: The main driver file containing the logic and demonstration.

## 🚀 How to Run

1.  Clone this repository or download the files.
2.  Open the project in Visual Studio 2022.
3.  Ensure all .h and .cpp files are included in the solution.
4.  Build and Run the project (F5).

---
Developed as part of my Computer Engineering studies at Damascus University.
