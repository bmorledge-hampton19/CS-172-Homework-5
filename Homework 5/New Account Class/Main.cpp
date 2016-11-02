/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 11-1-2016
// Homework 5
/////////////////////

//Pre-processor directives
#include "Account.h"
#include <iostream>
using namespace std;

// Main function
int main() {

	// Create an account and set interest rate as per the book's instructions.
	Account myAccount("George", 1122, 1000);
	myAccount.setAnnualInterestRate(0.015);

	// Preform various withdrawls and deposits according to the book.
	myAccount.deposit(30);
	myAccount.deposit(40);
	myAccount.deposit(50);

	myAccount.withdraw(5);
	myAccount.withdraw(4);
	myAccount.withdraw(2);

	// Print a summary of the account and all transactions

	cout << "Account number " << myAccount.getID() << " has the current balance: " << myAccount.getBalance() << "." << endl;
	cout << "The account is owned by " << myAccount.getName() << " and collects " << myAccount.getAnnualInterestRate() * 100 << "% interest annualy and" << endl << myAccount.getMonthlyInterestRate() * 100 << "% interest monthly." << endl;
	cout << "The transactions made on this account are as follows: " << endl << endl;

	for (int i = 0; i < myAccount.getTotalTransactions(); i++) {
		myAccount.getTransaction(i);
		cout << endl;
	}


	// End function.  Everything is ok!
	return 0;

}