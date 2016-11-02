#include "Account.h"
#include <iostream> 
using namespace std;

double Account::annualInterestRate = .01;

Account::Account()
{
	// Create Account with default values
	ID = 0;
	balance = 0;
	annualInterestRate = 0;
	totalTransactions = 0;
	name = "Ben";
}

Account::Account(string name, int id, double balance)
{
	// Create Account with given values.
	this->name = name;
	this->ID = id;
	this->balance = balance;
	// Default interest and totalTransactions
	annualInterestRate = 0;
	totalTransactions = 0;
}

int Account::getID()
{
	return ID;
}

double Account::getBalance()
{
	return balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

string Account::getName()
{
	return name;
}

void Account::getTransaction(int transactionNumber)
{
	transactions[transactionNumber].displayTransactionInfo();
}

int Account::getTotalTransactions()
{
	return totalTransactions;
}

void Account::setID(int ID)
{
	this->ID = ID;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;
}

void Account::setName(string name)
{
	this->name = name;
}

double Account::getMonthlyInterestRate()
{
	// Derive the monthly rate by dividing the annual rate by 12.
	return (annualInterestRate / 12);
}

void Account::withdraw(double amount)
{
	// Subtract the withdrawl amount from the current balance.
	balance -= amount;
	totalTransactions++;

	// Create a new transaction object for the withdrawl and add it to transactions
	Transaction newTransaction('w', amount, balance, "Basic Withdrawl");
	transactions.push_back(newTransaction);
}

void Account::deposit(double amount)
{
	// Add the deposit amount to the current balance.
	balance += amount;
	totalTransactions++;

	// Create a new transaction object for the deposit and add it to transactions
	Transaction newTransaction('d', amount, balance, "Basic Deposit");
	transactions.push_back(newTransaction);
}
