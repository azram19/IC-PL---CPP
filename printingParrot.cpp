#include <iostream>
#include <string>

using namespace std;

enum vehicleType {Lorry, PetrolCar, DieselCar, Bus};
enum messageType {Registration, BusIn, BusOut, Entrance, SetLimit, SetCharge};

template <class V, class M>

void print_message(V v, M m){
	switch(m){
		//Reg - cases for n-axles lorries and n-ppcm diesels
		case Registration: cout<<"A "<<v.get_type()<<" ("<<v.get_name()<<") has been registered"<<endl;
			break;
		case BusIn: cout<<v.get_passengers()<<" passengers board the bus ("<<v.get_name()<<"), so "<<v.get_total_passengers()
			<<"passengers are on board"<<endl;
			break;
		case BusOut: cout<<v.get_passengers()<<" passengers leave the bus ("<<v.get_name()<<"), leaving "<<v.total_passengers()
			<<" passengers on board"<<endl;
			break;
		// Entrance - cases for n-axles lorries and n-ppcm diesels
		case Entrance:cout<<"The "<<v.get_type()<<" ("<<v.get_name()<<") enters on "<<v.get_date()<<" at "<<v.get_time()<<" hours"<<endl;
			if(v.wascharged()){
				cout<<"The vehicle has already been charged today ; no action is taken"<<endl;}
			else if(v.get_type() = Bus and v.get_passengers()>20){
				cout<<"The vehicle goes free (now owes #"<<v.get_total_charge()<<")"<<endl;}
			else {
				cout<<"The vehicle is charged #"<<v.get_charge()<<" (now owes #"<<v.get_total_charge()<<")"<<endl;}
			break;
		case SetLimit:cout<<"The council says diesel cars with emissions less than "<<v.get_ppcm()
			<<" ppcm should pay a reduced rate"<<endl;
			break;
		case SetCharge:cout<<"The council sets the basic unit charge to #"<<v.get_rate()<<endl;
			break;
		deafult:cout<<"No message"<<endl;
	}

}

int main(){
	return 0;
}