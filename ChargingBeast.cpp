/*
 * ChargingBeast.cpp
 *
 *  Created on: 18 Jun 2011
 *      Author: lk1110
 */

#include "ChargingBeast.hpp"
#include "vehicle.hpp"
#include "dieselCar.hpp"
#include "petrolCar.hpp"
#include "lorry.hpp"
#include "bus.hpp"
#include <iostream>
#include <typeinfo>

using namespace std;


void ChargingBeast::charge(Vehicle * wheeledMachine){
	if(wheeledMachine -> get_was_charged()){
		wheeledMachine -> set_charge(0);
		return;
	}
	if((wheeledMachine->get_enter_time()<9||wheeledMachine->get_enter_time()>18)&&
			(typeid(*wheeledMachine)==typeid(DieselCar)||typeid(*wheeledMachine)==typeid(PetrolCar)))
	{
	wheeledMachine->set_charge(0);
	return;
	}
	//check types

	if(typeid(*wheeledMachine)==typeid(Lorry)){
		wheeledMachine->set_charge(((Lorry*)wheeledMachine) -> get_axle_number() *((Lorry*)wheeledMachine)->get_rate());
		wheeledMachine->set_was_charged(true);
	}
	else if(typeid(*wheeledMachine) == typeid(PetrolCar)){
		wheeledMachine->set_charge(2.0);
		wheeledMachine->set_was_charged(true);
	}
	else if(typeid(*wheeledMachine) == typeid(DieselCar)){
		if(((DieselCar*)wheeledMachine) -> get_emission() > ((DieselCar*)wheeledMachine) -> get_limit()) {
		    wheeledMachine->set_charge(3);
		} else {
		    wheeledMachine->set_charge(1);
		}
		wheeledMachine->set_was_charged(true);
	}
	else if(typeid(*wheeledMachine) == typeid(Bus)){
			if(((Bus*)wheeledMachine) -> get_total_passengers() > 20){
			    wheeledMachine -> set_charge(0);
			} else {
			    wheeledMachine -> set_charge(5);
			}
			wheeledMachine -> set_was_charged(true);
	}

}
