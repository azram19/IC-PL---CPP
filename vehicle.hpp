#ifndef INC_VEHICLE_H
#define INC_VEHICLE_H

enum messageType {Registration, BusIn, BusOut, Entrance, SetLimit, SetRate};
#include <string>
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
        
        static double get_rate();
	    
	    bool get_was_charged();
        void set_was_charged(bool);
        
        virtual void charge(){};    
        virtual void print(messageType msg){};Z
        
        void enter(Date, int);
    
        static void set_rate(double);
    
        bool operator == (const Vehicle&) const;
        bool operator > (const Vehicle&) const;
        bool operator < (const Vehicle&) const;
        bool operator >= (const Vehicle&) const;
        bool operator <= (const Vehicle&) const;
        bool operator != (const Vehicle&) const;
        
        string type;
                
        Vehicle(string);
        ~Vehicle(){};
    protected:
        
    private:
        Date enter_date;
        int enter_time;
        string plate_number; 
		double ra_charge;
		double total_charge;
	    bool wascharged;
        
        static double rate;
};

#endif /* INC_VEHICLE_H */
