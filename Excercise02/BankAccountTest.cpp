#include <iostream>
#include "bankAccount.h"

using namespace std;

int main() {
	int ui, user;
	double debOrCred;

	//creating 2 instances of Bank account
	BankAccount account1(200343, "Lee Stephens", 2.0, 50.00);
	BankAccount account2(223673, "John Monroe", 1.98, 50.00);

	

	cout << "Which account do you want to access? For account 1 press 1, for account 2 press 2: ";
	cin >> user;

	//If they want to access account1
	if (user == 1) {
		//display all the account information
		account1.Display();

		//user can choose to make a deposit or a withdrawl
		cout << "\n\nTo make a deposit press 1 to make a withdrawl press 2: ";
		cin >> ui;

		//if they want to make a dposit it calls thee credit functiona and the user chooses how much they want to deposit
		if (ui == 1) {
			cout << "\nHow much do you want to deposit?" << endl;
			cin >> debOrCred;
			account1.credit(debOrCred);
		}
		//if they want to make a withdrawl it calls thee debit functiona and the user chooses how much they want to withdraw
		else if (ui == 2) {
			cout << "\nHow much do you want to withdraw?" << endl;
			cin >> debOrCred;
			account1.debit(debOrCred);
		}
		//if an invalid input is entered
		else {
			cout << "\nNot a valid input";
		}
	}
	//if they want to access account 2
	else if (user == 2) {
		account2.Display();
		cout << "\n\nTo make a deposit press 1 to make a withdrawl press 2: ";
		cin >> ui;

		//if they want to make a deposit it calls the credit functiona and the user chooses how much they want to deposit
		if (ui == 1) {
			cout << "\nHow much do you want to deposit?" << endl;
			cin >> debOrCred;
			account2.credit(debOrCred);
		}
		//if they want to make a withdrawl it calls the debit functiona and the user chooses how much they want to withdraw
		else if (ui == 2) {
			cout << "\nHow much do you want to withdraw?" << endl;
			cin >> debOrCred;
			account2.debit(debOrCred);
		}
		//if an invalid input is entered
		else {
			cout << "\nNot a valid input";
		}
	}
	
}