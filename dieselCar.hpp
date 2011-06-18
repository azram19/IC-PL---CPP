#ifndef INC_DIESEL_CAR_H
#define INC_DIESEL_CAR_H

#include "vehicle.hpp"
class DieselCar:public Vehicle{
	private:
        static int limit;
	public:
		DieselCar(string, int);
		static void set_limit(int);
};
#endif /* INC_DIESEL_CAR_H */

