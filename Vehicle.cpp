#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string make, std::string model, int year, double startingBid)
    : make(make), model(model), year(year), startingBid(startingBid) {}

std::string Vehicle::getMake() const { return make; }
std::string Vehicle::getModel() const { return model; }
int Vehicle::getYear() const { return year; }
double Vehicle::getStartingBid() const { return startingBid; }

void Vehicle::display() const {
    std::cout << year << " " << make << " " << model 
              << " | Starting Bid: $" << startingBid << std::endl;
}
