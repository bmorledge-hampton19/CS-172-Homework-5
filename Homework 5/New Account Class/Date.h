#pragma once


class Date {

private:
	int year; // The year of the date.
	int month; // The month of the year.
	int day; // The day of the month.

public:
	Date(); // Creates a date object using the current day.
	Date(int time); // Creates a date object using the elapsed time in seconds since January 1, 1970.
	Date(int year, int month, int day); // Creates a date object with given year, month, and day.

	void setDate(int elapsedTime); // Updates a date object based on the time elapsed in seconds since the last update.

	// Basic getters.
	int getYear();
	int getMonth();
	int getDay();




};