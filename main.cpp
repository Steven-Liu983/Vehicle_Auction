#include <iostream>
#include "Auction.h"

int main() {
    Auction auction;

    auction.addVehicle(Vehicle("Toyota", "Camry", 2019, 5000));
    auction.addVehicle(Vehicle("Ford", "F-150", 2020, 12000));
    auction.addVehicle(Vehicle("Honda", "Civic", 2018, 4500));

    auction.listVehicles();

    int index;
    double bid;

    std::cout << "\nEnter vehicle index to bid on: ";
    std::cin >> index;

    std::cout << "Enter your bid amount: ";
    std::cin >> bid;

    auction.simulateBid(index, bid);

    return 0;
}