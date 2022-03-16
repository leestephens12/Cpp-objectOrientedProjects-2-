#pragma once
#include <iostream>
using namespace std;

class BankAccount {
private:
	int accountNumber;
	string customerName;
	double interestRate;
	double accountBalance;

public:
	//No argument constructor
	BankAccount() {
		accountNumber;
		customerName;
		interestRate;
		accountBalance;
	}

	//4 argument constructor
	BankAccount(int acctNum, string name, double interest, double balance) {
		accountNumber = acctNum;
		customerName = name;
		interestRate = interest;
		accountBalance = balance;
	}


	//getters and setters
	void setAccountNumber(int acctNum) {
		accountNumber = acctNum;
	}
	int getAccountNumber() {
		return accountNumber;
	}

	void setCustomerName(string name) {
		customerName = name;
	}
	string getCustomerName() {
		return customerName;
	}

	//validation for interest has to be between 0.1 - 2 or it will automatically set it to 2
	void setInterestRate(double interest) {
		if (interestRate >= 0.1 && interestRate <= 2.0) {
			interestRate = interest;
		}
		else {
			cout << "interest rate must be set between 0.1% and 2.0% so by default it has been set to 2.0%";
			interestRate = 2.0;
		}
	}
	double getInterestRate() {
		return interestRate;
	}

	//validation for the account balance if invalid input defaults it to 10
	void setAccountBalance(double balance) {
		if (accountBalance > 0 && accountBalance >= 10.00) {
			accountBalance = balance;
		}
		else {
			cout << "Account balance must be minimum $10.00 so it has been set to 10.00 automatically";
			accountBalance = 10.00;
		}
	}
	double getAccountBalance() {
		return accountBalance;
	}

	//credit function adds the amount input by the user to the current account balance
	void credit(double amount) {
		cout << "Deposit of $" << amount << " approved!" << endl;
		setAccountBalance(accountBalance + amount);
		cout << "Your new balance is: $" << accountBalance << endl;
	}
	//checks to make sure after the withdrawl goes through that the user will still have minimum 10 in their account
	void debit(double amount) {
		if (accountBalance - amount - 1 >= 10) {
			cout << "Withdrawl of $" << amount << " approved!" << endl;
			setAccountBalance(accountBalance - amount - 1);
			cout << "Your new balance is: $" << accountBalance << endl;
		}
		else {
			cout << "You don't have enough money to make this withdrawl";
		}
	}

	//display function to display all the data
	void Display() {
		cout << "Account Number: " << accountNumber << endl;
		cout << "Customer Name: " << customerName << endl;
		cout << "Interest Rate: " << interestRate << "%" << endl;
		cout << "Account Balance: $" << accountBalance << endl;
	}
};