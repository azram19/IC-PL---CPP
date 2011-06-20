/*
Class Vehicle

@author Lukasz Koprowski
@author Piotr Bar
*/

#include <string>
#include "vehicle.hpp"
#include "ChargingBeast.hpp"
#include "printingParrot.hpp"
#include "date.hpp"


using namespace std;

string Vehicle::get_type(){
    return type;
}

double Vehicle::get_charge(){
    return ra_charge;
}

double Vehicle::get_total_charge(){
    return total_charge;
}

void Vehicle::set_charge(double ch){
    ra_charge = ch;
    total_charge += ch;
}

string Vehicle::get_plate_number(){
    return plate_number;
}

Date Vehicle::get_enter_date(){
    return enter_date;
}

int Vehicle::get_enter_time(){
    return enter_time;
}

double Vehicle::get_rate(){
    return rate;
}

void Vehicle::set_rate(double rate){
    Vehicle::rate = rate;
    PrintingParrot::print_message(NULL, SetRate);
}

bool Vehicle::get_was_charged(){
	return wascharged;
}
void Vehicle::set_was_charged(bool w){
	wascharged = w;
}
void Vehicle::enter(Date date, int time){
    if(date == enter_date){
        wascharged = false;
	goes_free = false;
	no_action = false;
    }
    enter_date = date;
    enter_time = time;
    charge();
    print(Entrance);
}

bool Vehicle::get_no_action(){
	return no_action;
}
bool Vehicle::get_goes_free(){
	return goes_free;
}

void Vehicle::set_no_action(bool na){
	no_action = na;
}

void Vehicle::set_goes_free(bool gf){
	goes_free = gf;
}

bool Vehicle::operator ==(const Vehicle& rhs) const{
    return plate_number == rhs.plate_number;
}

bool Vehicle::operator !=(const Vehicle& rhs) const{
    return !(*this == rhs);
}

Vehicle::Vehicle(string plate_number){
    this -> plate_number = plate_number;
    wascharged = false;
    ra_charge = 0;
    total_charge = 0;
}

double Vehicle::rate = 1;
