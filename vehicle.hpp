#ifndef INC_VEHICLE_H
#define INC_VEHICLE_H

enum messageType {Registration, BusIn, BusOut, Entrance, SetLimit, SetRate};
#include<string>
#include "date.hpp"
using namespace std;

class Vehicle{
    public:
		string get_type();
        string get_plate_number();
        Date get_enter_date();
        int get_enter_time();
		double get_charge();
		double get_total_charge();
		
		void set_charge(double);
		void set_total_charge(double);
        
        static double get_rate();
	    bool was_charged();
        
        void charge();
        void print(messageType);
        
        void enter(Date, int);
    
        static void set_rate(double);
    
        bool operator == (const Vehicle&) const;
        bool operator > (const Vehicle&) const;
        bool operator < (const Vehicle&) const;
        bool operator >= (const Vehicle&) const;
        bool operator <= (const Vehicle&) const;
        bool operator != (const Vehicle&) const;
    
    protected:
        static void (ChargingBeast::*charging_call)(Vehicle);
        static void (PrintingParrot::*printing_call)(Vehicle, messageType);
        
        Vehicle(string);
        ~Vehicle();
        
    private:
        Date enter_date;
        int enter_time;
        const string plate_number; 
		const string type;
		double charge;
		double total_charge;
	    bool wascharged;
        
        static double rate;
};

#endif /* INC_VEHICLE_H */
