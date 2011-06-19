#include "vehicle.hpp"
#include "dieselCar.hpp"
#include "ChargingBeast.hpp"
#include "printingParrot.hpp"

DieselCar::DieselCar(string plate_number, int emission) : Vehicle(plate_number){
        this -> emission = emission;
        type = "diesel car";
    	print(Registration);
}

int DieselCar::get_emission(){
    return emission;
}

void DieselCar::set_emission(int emission){
    this -> emission = emission;
}

void DieselCar::set_limit(double limit){
    DieselCar::limit = limit;
    PrintingParrot::print_message(NULL, SetLimit);
}

double DieselCar::get_limit(){
	return limit;
}

void DieselCar::charge(){
    ChargingBeast::charge(this);
}

void DieselCar::print(messageType msg){
    PrintingParrot::print_message(this, msg);
}

double DieselCar::limit = 0;
