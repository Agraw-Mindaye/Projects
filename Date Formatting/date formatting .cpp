#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;

int main()
{
    int month, day, year;
    
    //User input for the month 
    cout << "Enter the month: ";
    cin >> month;
    
    while(month < 1 || month > 12)
    {
    	cout << "ERROR! The month must be between 1 and 12. Try again: ";
		cin >> month; 
	}
    
    //User input for the day
    cout << "Enter the day: ";
    cin >> day;
    
    while(day < 1 || day > 31)
    {
    	cout << "ERROR! The day must be between 1 and 31. Try again: ";
		cin >> day; 
	}
	
	//User input for the year
	cout << "Enter the year: ";
	cin >> year;
	
	cout << endl;
	
	Date format(month, day, year);
	
	//Outputs the date in three diffrent ways
	format.format1();
	format.format2();
	format.format3();
    
    return 0;
}

