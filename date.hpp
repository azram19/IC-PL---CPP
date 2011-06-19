#ifndef INC_DATE_H
#define INC_DATE_H

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int, int, int);
        
        int get_day();
        int get_month();
        int get_year();
        
        void set_day();
        void set_month();
        void set_year();
        
        bool operator != (const Vehicle&) const;
        bool operator == (const Vehicle&) const;

	void print_date();
};

#endif /* INC_DATE_H */
