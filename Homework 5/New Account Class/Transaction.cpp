#include "Transaction.h"
#include  <iostream> 
using namespace std;

Transaction::Transaction(char type, double amount, double balance, string description)
{

	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;

}

void Transaction::displayTransactionInfo()
{
	// Print important variables to the screen preceded by identifiers.

	cout << "Transaction type: " << type << endl;

	cout << "Transaction amount: " << amount << endl;

	cout << "Balance afterwards: " << balance << endl;

	cout << "Description of transaction: " << description << endl;

}
