#include "Date.h"
#include <ctime>
using namespace std;

Date::Date()
{
	// Use the number of seconds since January 1st, 1970 to determine the current date
	year = time(0) / 31536000; // 31536000 = number of seconds in 1 year
	month = (time(0) % 31536000) / (31536000 / 12); // An approximation of the month based on 12 equal months.  (Yes, I'm lazy.)
	day = ((time(0) % 31536000) % (31536000 / 12)) / 86400; // An approximation of the day of the month based on the 12 equal months.
}

Date::Date(int time)
{

	// Use the number of seconds since January 1st, 1970 to determine the current date
	year = time / 31536000; // 31536000 = number of seconds in 1 year
	month = (time % 31536000) / (31536000 / 12); // An approximation of the month based on 12 equal months.  (Yes, I'm lazy.)
	day = ((time % 31536000) % (31536000 / 12)) / 86400; // An approximation of the day of the month based on the 12 equal months.

}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;

}

void Date::setDate(int elapsedTime)
{

	year += elapsedTime / 31536000; // 31536000 = number of seconds in 1 year
	month += (elapsedTime % 31536000) / (31536000 / 12); // An approximation of the month based on 12 equal months.  (Yes, I'm lazy.)
	day += ((elapsedTime % 31536000) % (31536000 / 12)) / 86400; // An approximation of the day of the month based on the 12 equal months.

}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}
