#include "vehicle.hpp"
#include "lorry.hpp"

Lorry::Lorry(string plate_number, int axle_number) : Vehicle(plate_number){
	this -> axle_number = axle_number;
	this -> type = "lorry";
	print(Registration);
}

int Lorry::get_axle_number(){
	return axle_number;
}

