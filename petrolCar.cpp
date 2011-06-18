#include "vehicle.hpp"
#include "petrolCar.hpp"

PetrolCar::PetrolCar(string plate_number):Vehicle(plate_number){
	this.plate_number = plate_number;
	this.type = "petrol car";
    	this.print(Registration);
}
