#include <iostream>
#include "Date.h"
using namespace std;

	//Constructor
	Date::Date(int month, int day, int year)
	{
        Date::m = month;
        Date::d = day;
        Date::y = year;
    }
	//Formats the date with the first method
	void Date::format1()
    {
    	cout << m << "/" << d << "/" << y << endl;
	}
     
    //Fomrats the date with the second method
	void Date::format2() 
	{
		cout << months[m - 1] << " " << d << ", " << y << endl;
	}        
	
	//Formats the date with the third method
	void Date::format3()
	{
		cout << d << " " << months[m - 1] << " " << y << endl;
	}     

