/*
Class Lorry

@author Lukasz Koprowski
@author Piotr Bar
*/

#include "vehicle.hpp"
#include "lorry.hpp"
#include "ChargingBeast.hpp"
#include "printingParrot.hpp"

using namespace std;

Lorry::Lorry(string plate_number, int axle_number) : Vehicle(plate_number){
	this -> axle_number = axle_number;
	this -> type = "lorry";
	print(Registration);
}

int Lorry::get_axle_number(){
	return axle_number;
}

void Lorry::charge(){
    ChargingBeast::charge(this);
}

void Lorry::print(messageType msg){
    PrintingParrot::print_message(this, msg);
}
