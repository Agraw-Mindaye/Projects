#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
private:
    int m, d, y;  
public:
    Date(int, int, int);
    
    void format1();
    void format2();
    void format3();

	string months[12] =
	{"January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"};
};
#endif

