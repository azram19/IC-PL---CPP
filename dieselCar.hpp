#ifndef INC_DIESEL_CAR_H
#define INC_DIESEL_CAR_H

#include "vehicle.hpp"
class DieselCar : public Vehicle{
	private:
        static int limit;
        int emission;
	public:
		DieselCar(string, int);
		static void set_limit(int);
		
		int get_emission();
		void set_emission(int);
};
#endif /* INC_DIESEL_CAR_H */

