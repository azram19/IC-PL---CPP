/*
Class Vehicle

@author Lukasz Koprowski
@author Piotr Bar
*/

#ifndef INC_DIESEL_CAR_H
#define INC_DIESEL_CAR_H

#include "vehicle.hpp"

class DieselCar : public Vehicle {
	private:
        static double limit; // limit of emission for a diesel car
        int emission; //emission of the car
	public:
		DieselCar(string, int);
		~DieselCar(){};
		static void set_limit(double);
		
		int get_emission();
		static double get_limit();
		void set_emission(int);
		
		void charge();
		void print(messageType);
};
#endif /* INC_DIESEL_CAR_H */

