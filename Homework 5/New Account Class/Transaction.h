#pragma once

// Pre-Processor Directives
#include <string>
#include "Date.h"
using namespace std;


class Transaction {

private:
	Date date; // The date of the transaction
	char type; // The type of transaction.  'W' for withdrawl, 'D' for deposit, etc.
	double amount; // The amount associated with the transaction.
	double balance; // The balance after the transaction.
	string description; // Description of the transaction

public:
	Transaction(char type, double amount, double balance, string description); // Constructor which sets basic parameters.
	void displayTransactionInfo(); // Display the information about the transaction.

};