#include <string>
#include "vehicle.hpp"

String Vehicle::get_plate_number(){
    return plate_number;
}

Date Vehicle::get_enter_date(){
    return enter_date;
}

Date Vehicle::get_leave_date(){
    return leave_date;
}

int Vehicle::get_enter_time(){
    return enter_time;
}

int Vehicle::get_leave_time(){
    return leave_time;
}

double Vehicle::get_rate(){
    return rate;
}

void Vehicle::charge(){
    Vehicle::charging_call(this);
}

void Vehicle::leave(DATE d){
    Vehicle::printing_call(this, d);
}

void Vehicle::set_rate(double rate){
    Vehicle::rate = rate;
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

Vehicle::Vehicle(String plate_number){
    this.plate_number = plate_number;
}
void Vehicle::charging_call = NULL;
void Vehicle::printing_call = NULL;
double Vehicle::rate = 0;
