#include "vehicle.hpp"
#include "bus.hpp"
#include <string>

Bus::Bus(string plate_number) : Vehicle(string plate_number){
    ra_passengers = 0;
    total_passengers = 0;
    type = "Bus";
    this.print(Registration);
}

int Bus::get_total_passengers(){
    return total_passengers;
}

int Bus::get_ra_passengers(){
    return ra_passengers;
}

void Bus::board(int passengers){
    total_passengers += passengers;
    ra_passengers = passengers;
    this.print(BusIn);
}

void Bus::leave(int passengers){
    total_passengers -= passengers;
    ra_passengers = passengers;
    this.print(BusOut);
}

