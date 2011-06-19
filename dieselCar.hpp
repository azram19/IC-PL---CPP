#ifndef INC_DIESEL_CAR_H
#define INC_DIESEL_CAR_H

#include "vehicle.hpp"

class DieselCar : public Vehicle {
	private:
        static double limit;
        int emission;
	public:
		DieselCar(string, int);
		~DieselCar(){};
		static void set_limit(double);
		
		int get_emission();
		double get_limit();
		void set_emission(int);
		
		void charge();
		void print(messageType);
};
#endif /* INC_DIESEL_CAR_H */

