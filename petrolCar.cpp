#include "vehicle.hpp"
#include "petrolCar.hpp"
#include "ChargingBeast.hpp"
#include "printingParrot.hpp"

PetrolCar::PetrolCar(string plate_number) : Vehicle(plate_number){
	type = "petrol car";
    print(Registration);
}

void PetrolCar::charge(){
    ChargingBeast::charge(this);
}

void PetrolCar::print(messageType msg){
    PrintingParrot::print_message(this, msg);
}
