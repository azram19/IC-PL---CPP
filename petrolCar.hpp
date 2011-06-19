#ifndef INC_PETROL_CAR_H
#define INC_PETROL_CAR_H

#include "vehicle.hpp"
class PetrolCar:public Vehicle{
	public:
		PetrolCar(string);
		~PetrolCar(){};
        void charge();
		void print(messageType);
};
#endif /* INC_PETROL_CAR_H */
