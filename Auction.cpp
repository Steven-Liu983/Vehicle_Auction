#include "Auction.h"
#include <iostream>

void Auction::addVehicle(const Vehicle& v) {
    vehicles.push_back(v);
}

void Auction::listVehicles() const {
    std::cout << "\n--- Vehicles in Auction ---\n";
    for (size_t i = 0; i < vehicles.size(); ++i) {
        std::cout << i << ": ";
        vehicles[i].display();
    }
}

void Auction::simulateBid(int index, double bidAmount) const {
    if (index < 0 || index >= vehicles.size()) {
        std::cout << "Invalid vehicle index.\n";
        return;
    }

    const Vehicle& v = vehicles[index];
    std::cout << "\nSimulating bid on: ";
    v.display();

    if (bidAmount >= v.getStartingBid()) {
        std::cout << "Bid accepted! Winning bid: $" << bidAmount << "\n";
    } else {
        std::cout << "Bid too low. Minimum required: $" << v.getStartingBid() << "\n";
    }
}