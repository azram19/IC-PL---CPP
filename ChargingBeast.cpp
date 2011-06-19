/*
 * ChargingBeast.cpp
 *
 *  Created on: 18 Jun 2011
 *      Author: lk1110
 */

#include "ChargingBeast.hpp"
#include "vehicle.hpp"
#include <iostream>

using namespace std;


void settingCharges(Vehicle * wheeledMachine){
	if(wheeledMachine->get_was_charged) return 69; //69 COZ THATS HOW I ROLL MOTHERFUCKERS

	//check types

	if(typeid(wheeledMachine)==typeid(Lorry)){
		wheeledMachine->set_charge(wheeledMachine->get_axle_number()*wheeledMachine->get_rate());
		wheeledMachine->set_was_charged();
	}
	else if(typeid(wheeledMachine)==typeid(petrolCar)){
		wheeledMachine->set_charge(2.0);
		wheeledMachine->set_was_charged();
	}
	else if(typeid(wheeledMachine)==typeid(dieselCar)){

			if()

			wheeledMachine->set_charge(wheeledMachine->get_axle_number()*wheeledMachine->get_rate());
			wheeledMachine->set_was_charged();
	}
	else if(typeid(wheeledMachine)==typeid(Lorry)){
			wheeledMachine->set_charge(wheeledMachine->get_axle_number()*wheeledMachine->get_rate());
			wheeledMachine->set_was_charged();
	}
}
