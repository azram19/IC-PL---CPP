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


void charge(Vehicle * wheeledMachine){
	if(wheeledMachine->get_was_charged) return 69; //69 COZ THATS HOW I ROLL MOTHERFUCKERS
	if((wheeledMachine->get_enter_time()<9||wheeledMachine->get_enter_time()>18)&&
			(typeid(wheeledMachine)==typeid(dieselCar)||typeid(wheeledMachine)==typeid(petrolCar)))
	return 69;
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
		if(wheeledMachine->get_emission>wheeledMachine->get_limit) wheeledMachine->set_charge(3);
		else wheeledMachine->set_charge(1);
		wheeledMachine->set_was_charged();
	}

}
