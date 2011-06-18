#include "date.hpp"

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
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
    this.day = day;
}

void Date::set_month(int month){
    this.month = month;
}

void Date::set_year(int year){
    this.year = year;
}

