#include "date.hpp"

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void Date::print_date(){
	cout << day << " / " << month << " / " << year << endl; 
}

int Date::get_day(){
    return day;
}

int Date::get_month(){
    return month;
}

int Date::get_year(){
    return year;
}

void Date::set_day(int day){
    this -> day = day;
}

void Date::set_month(int month){
    this -> month = month;
}

void Date::set_year(int year){
    this -> year = year;
}

bool Date::operator !=(const Date& rhs) const{
    return (day == rhs.day) ? ((month == rhs.month) ? ((year == rhs.year) ? true : false) : false) : false;
}


bool Date::operator ==(const Date& rhs) const{
    return !(*this != rhs);
}
/*
int main(){
    Date nd(20, 9, 1991);
    return 0;
}*/
