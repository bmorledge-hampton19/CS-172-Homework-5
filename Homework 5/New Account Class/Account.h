#pragma once

//Pre-Processor directives.
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account {

private:
	int ID; // The account's ID
	double balance; // The balance in the account
	double static annualInterestRate; // The annual interest rate on the account, expressed as a decimal.
	string name; // The name of the customer
	vector<Transaction> transactions; // A vector of transactions that have occured on the account
	int totalTransactions; // The number of transactions that have taken place.

public:
	Account(); // Defaults ID, balance, and interest to 0 and name to Ben.
	Account(string name, int id, double balance); // A constructer that creates an account based on the given name, id, and balance.

	// Basic getters and setters
	int getID();
	double getBalance();
	double getAnnualInterestRate();
	string getName();
	void getTransaction(int transactionNumber); // Prints the transaction details to the screen
	int getTotalTransactions();
	void setID(int ID);
	void setBalance(double balance);
	void setAnnualInterestRate(double annualInterestRate);
	void setName(string name);

	double getMonthlyInterestRate(); // Returns the monthly interest rate expressed as a decimal as it is derived from the annual interest rate.
	void withdraw(double amount); // removes money from the account and creates a new transaction.
	void deposit(double amount); // Adds money to the account and creates a new transaction.


};