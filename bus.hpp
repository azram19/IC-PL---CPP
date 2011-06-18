#ifndef INC_BUS_H
#define INC_BUS_H

#include "vehicle.hpp"

class Bus:public Vehicle{
	private:
		int passengers;
		int total_passengers;
	public:
		Bus(string);
		int get_total_passengers();
		int get_passengers();
		void board(int);
};

#endif /* INC_BUS_H */
