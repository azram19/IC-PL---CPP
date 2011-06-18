#include <iostream>
#include <string>

using namespace std;

//enum vehicleType {Lorry, PetrolCar, DieselCar, Bus};
//enum messageType {Registration, BusIn, BusOut, Entrance, SetLimit, SetRate};

template <class V, class M>

void print_message(V v, M m){
	switch(m){
		case Registration: cout<<"A ";
			if(typeid(v)==typeid(Lorry)){cout<<v.get_emission()<<"-ppcm ";}
			if(typeid(v)==typeid(dieselCar)){cout<<v.get_axle_number()<<"-axle ";}
			cout<<v.get_type()<<" ("<<v.get_plate_number()<<") has been registered"<<endl;
			break;
		case BusIn: cout<<v.get_ra_passengers()<<" passengers board the bus ("<<v.get_plate_number()<<"), so "<<v.get_total_passengers()
			<<"passengers are on board"<<endl;
			break;
		case BusOut: cout<<v.get_ra_passengers()<<" passengers leave the bus ("<<v.get_plate_number()<<"), leaving "<<v.get_total_passengers()
			<<" passengers on board"<<endl;
			break;
		case Entrance:cout<<"The ";
			if(typeid(v)==typeid(Lorry)){cout<<v.get_emission()<<"-ppcm ";}
			if(typeid(v)==typeid(dieselCar)){cout<<v.get_axle_number()<<"-axle ";}
			cout<<v.get_type()<<" ("<<v.get_plate_number()<<") enters on "<<v.get_enter_date()<<" at "<<v.get_enter_time()<<" hours"<<endl;
			if(v.was_charged()){
				cout<<"The vehicle has already been charged today ; no action is taken"<<endl;}
			else if(v.get_type() = Bus and v.get_ra_passengers()>20){
				cout<<"The vehicle goes free (now owes #"<<v.get_total_charge()<<")"<<endl;}
			else {
				cout<<"The vehicle is charged #"<<v.get_charge()<<" (now owes #"<<v.get_total_charge()<<")"<<endl;}
			break;
		case SetLimit:cout<<"The council says diesel cars with emissions less than "<<v.get_limit()
			<<" ppcm should pay a reduced rate"<<endl;
			break;
		case SetRate:cout<<"The council sets the basic unit charge to #"<<v.get_rate()<<endl;
			break;
		deafult:cout<<"No message"<<endl;
	}

}

