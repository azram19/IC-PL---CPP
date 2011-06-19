#ifndef INC_LORRY_H
#define INC_LORRY_H
#include "vehicle.hpp"
#include <string>

using namespace std;

class Lorry : public Vehicle{
	private:
		int axle_number;
	public:
		Lorry(string, int);
		int get_axle_number();
		void charge();
		void print(messageType);
};
#endif /* INC_LORRY_H */
