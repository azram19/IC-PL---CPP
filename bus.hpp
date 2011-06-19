#ifndef INC_BUS_H
#define INC_BUS_H

#include "vehicle.hpp"
using namespace std;

class Bus : public Vehicle{
	private:
		int ra_passengers;
		int total_passengers;
	public:
		Bus(string);
		int get_total_passengers();
		int get_ra_passengers();
		void board(int);
		void leave(int);
};

#endif /* INC_BUS_H */
