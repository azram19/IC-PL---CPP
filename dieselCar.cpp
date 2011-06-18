#include "vehicle.hpp"
#include "dieselCar.hpp"

DieselCar::DieselCar(string plate_number, int emission) : Vehicle(plate_number){
        this.emission = emission;
        type = "diesel car";
    	this.print(Registration);
}

int DieselCar::get_emission(){
    return emission;
}

void DieselCar::set_emission(int emission){
    this.emission = emission;
}

void DieselCar::set_limit(int limit){
    DieselCar::limit = limit;
    this.print(SetLimit);
}

int DieselCar::get_limit(){
	return limit;
}


