#ifndef INC_LORRY_H
#define INC_LORRY_H
#include "vehicle.hpp"

class Lorry : public Vehicle{
	private:
		int axle_number;
	public:
		Lorry(string, int);
		int get_axle_number();
};
#endif /* INC_LORRY_H */
