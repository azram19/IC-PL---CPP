/*
Class Date

@author Lukasz Koprowski
*/

#ifndef INC_DATE_H
#define INC_DATE_H

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int, int, int);
        
        int get_day();
        int get_month();
        int get_year();
        
        void set_day(int);
        void set_month(int);
        void set_year(int);
        
        bool operator != (const Date&) const;
        bool operator == (const Date&) const;

	/*
	Prints formatted date
	
	@author Piotr Bar
	*/
	void print_date();
};

#endif /* INC_DATE_H */
