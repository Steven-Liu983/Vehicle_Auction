#ifndef AUCTION_H
#define AUCTION_H

#include <vector>
#include "Vehicle.h"

class Auction {
private:
    std::vector<Vehicle> vehicles;

public:
    void addVehicle(const Vehicle& v);
    void listVehicles() const;
    void simulateBid(int index, double bidAmount) const;
};

#endif