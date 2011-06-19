#include <string>
#include "vehicle.hpp"
#include "ChargingBeast.hpp"
#include "printingParrot.hpp"

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

void Vehicle::charge(){
    ChargingBeast::charge(this);
}

void Vehicle::print(messageType msg){
    PrintingParrot::print_message(this, msg);
}

void Vehicle::set_rate(double rate){
    Vehicle::rate = rate;
    print(SetRate);
}

bool Vehicle::get_was_charged(){
	return wascharged;
}

void Vehicle::enter(Date date, int time){
    enter_date = date;
    enter_time = time;
    if(date != enter_date){
        wascharged = false;
    }
    print(Entrance);
}

bool Vehicle::operator ==(const Vehicle& rhs) const{
    return (plate_number).compare(rhs.get_plate_number()) == 0;
}

bool Vehicle::operator >(const Vehicle& rhs) const{
    return (plate_number).compare(rhs.get_plate_number()) > 0;
}

bool Vehicle::operator <(const Vehicle& rhs) const{
    return (plate_number).compare(rhs.get_plate_number()) < 0;
}

bool Vehicle::operator >=(const Vehicle& rhs) const{
    return !(*this < rhs);
}

bool Vehicle::operator <=(const Vehicle& rhs) const{
    return !(*this > rhs);
}

bool Vehicle::operator !=(const Vehicle& rhs) const{
    return !(*this == rhs);
}

Vehicle::Vehicle(string plate_number){
    this.plate_number = plate_number;
    wascharged = false;
    ra_charge = 0;
    total_charge = 0;
}

double Vehicle::rate = 1;
