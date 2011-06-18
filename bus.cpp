#include "vehicle.hpp"
#include "bus.hpp"
#include <string>

Bus::Bus(string plate_number) : Vehicle(plate_number){
    ra_passengers = 0;
    total_passengers = 0;
    type = "Bus";
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
}

void Bus::leave(int passengers){
    total_passengers -= passengers;
    ra_passengers = passengers;
}

