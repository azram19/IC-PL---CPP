#include <iostream>
#include <string>
#include "printingParrot.hpp"
#include "vehicle.hpp"
#include "lorry.hpp"
#include "dieselCar.hpp"
#include "petrolCar.hpp"
#include "bus.hpp"
#include <typeinfo>
#include "date.hpp"

using namespace std;

void PrintingParrot::print_message(Vehicle *v, messageType m){
	switch(m){
		case Registration: cout<<"A ";
			if(typeid(v)==typeid(DieselCar*)){cout<<((DieselCar*)v)->get_emission()<<"-ppcm ";}
			if(typeid(v)==typeid(Lorry*)){cout<<((Lorry*)v)->get_axle_number()<<"-axle ";}
			cout<<v->get_type()<<" ("<<v->get_plate_number()<<") has been registered"<<endl;
			break;
		case BusIn: cout<<((Bus*)v)->get_ra_passengers()<<" passengers board the bus ("<<((Bus*)v)->get_plate_number()<<"), so "<<((Bus*)v)->get_total_passengers()<<"passengers are on board"<<endl;
			break;
		case BusOut: cout<<((Bus*)v)->get_ra_passengers()<<" passengers leave the bus ("<<((Bus*)v)->get_plate_number()<<"), leaving "<<((Bus*)v)->get_total_passengers()<<" passengers on board"<<endl;
			break;
		case Entrance:cout<<"The ";
			if(typeid(v)==typeid(DieselCar*)){cout<<((DieselCar*)v)->get_emission()<<"-ppcm ";}
			if(typeid(v)==typeid(Lorry*)){cout<<((Lorry*)v)->get_axle_number()<<"-axle ";}
				cout<<v->get_type()<<" ("<<v->get_plate_number()<<") enters on ";
				(v->get_enter_date()).print_date();
				cout<<" at "<<v->get_enter_time()<<"h00 hours"<<endl;
			if(v->get_was_charged()){
				cout<<"The vehicle has already been charged today ; no action is taken"<<endl;}
			else if(typeid(v)==typeid(Bus*) and ((Bus*)v)->get_ra_passengers()>20){
				cout<<"The vehicle goes free (now owes #"<<v->get_total_charge()<<")"<<endl;}
			else {
				cout<<"The vehicle is charged #"<<v->get_charge()<<" (now owes #"<<v->get_total_charge()<<")"<<endl;}
			break;
		case SetLimit:cout<<"The council says diesel cars with emissions less than "<<((DieselCar*)v)->get_limit()<<" ppcm should pay a reduced rate"<<endl;
			break;
		case SetRate:cout<<"The council sets the basic unit charge to #"<<v->get_rate()<<endl;
			break;
		deafult:cout<<"No message"<<endl;
	}

}

int main(){
return 0;
}

