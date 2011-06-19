#include <string>
#include "vehicle.hpp"

string Vehicle::get_type(){
    return type;
}

double Vehicle::get_charge(){
    return total_charge;
}

double Vehicle::get_total_charge(){
    return charge;
}

void Vehicle::set_charge(double ch){
    charge = ch;
}

void Vehicle::set_total_charge(double ch){
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
    charging(this);
}

void Vehicle::print(messageType msg){
    print_message(this, msg)
}

void Vehicle::set_rate(double rate){
    Vehicle::rate = rate;
    this.print(SetRate);
}

bool Vehicle::get_was_charged(){
	return wascharged;
}

void Vehicle::set_was_charged(bool wascharged){
	this.wascharged = wascharged;
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
    charge = 0;
    total_charged = 0;
}

double Vehicle::rate = 1;
