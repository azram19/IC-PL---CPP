/*
Class Vehicle

@author Lukasz Koprowski
@author Piotr Bar
*/
#ifndef INC_BUS_H
#define INC_BUS_H

#include "vehicle.hpp"
using namespace std;

class Bus : public Vehicle{
	private:
		int ra_passengers; //recent change of passengers
		int total_passengers; //number of passenger on board
	public:
		Bus(string);
		~Bus(){};
		int get_total_passengers();
		int get_ra_passengers();
		void board(int); //passengers enter the bus
		void leave(int); //passengers leave the bus
		void charge(); //bus is charged
		void print(messageType); //prints message
};

#endif /* INC_BUS_H */
