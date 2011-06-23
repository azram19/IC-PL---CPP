/*
 *  ChargingBeast.hpp
 *
 *  Created on: 18 Jun 2011
 *  Author: Lukasz Kmiecik 
 */


#ifndef CHARGING_BEAST
#define CHARGING_BEAST

using namespace std;

#include "vehicle.hpp"
#include "dieselCar.hpp"
#include "petrolCar.hpp"
#include "lorry.hpp"
#include "bus.hpp"

class ChargingBeast{
public:
	static void charge(Vehicle *);
};

#endif

