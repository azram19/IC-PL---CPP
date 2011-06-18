#include "vehicle.hpp"
#include "lorry.hpp"

Lorry::Lorry(string plate_number, int axle_number):Vehicle(plate_number){
	this.plate_number = plate_number;
	this.axle_number = axle_number;
	this.type = "lorry";
}

int Lorry::get_axle_number(){
	return axle_number;
}

