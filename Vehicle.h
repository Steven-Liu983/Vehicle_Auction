#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string make;
    std::string model;
    int year;
    double startingBid;

public:
    Vehicle(std::string make, std::string model, int year, double startingBid);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getStartingBid() const;

    void display() const;
};

#endif