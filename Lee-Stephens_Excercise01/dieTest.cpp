#include <iostream>
#include "die.h"
#include <time.h>
using namespace std;

int main() {
	srand(time(0));

	int userInput;

	//Creating 2 default die objects

	Die die1;
	Die die2;

	//Loops through 3 times if the user were to get it wrong every time
	for (int i = 0; i < 3; i++) {

		//Storing the die object values into local variables
		int value1 = die1.DieValue();
		int value2 = die2.DieValue();
		int total = value1 + value2;

		//Gets user to input a number between 2 and 12
		cout << "Enter a number between 2-12: ";
		cin >> userInput;

		//If the user gets it right it will out put a win message and show the value of the dice and breaks the for loop
		if (userInput == total) {
			cout << "You Win!!!" << endl;
			cout << "Die 1: " << value1 << " Die 2: " << value2 << " Total: " << total << endl << endl;
			break;
		}
		//If the user gets it wrong 3 times it will out put a lose message and show the value of the dice
		else if (i == 2) {
			cout << "You Lose!!" << endl;
			cout << "Die 1: " << value1 << " Die 2: " << value2 << " Correct Answer: " << total << endl << endl;
			break;
		}
		//everytime the user gets an answer wrong this message is dsiplayed
		else {
			cout << "Wrong!!" << endl;
			cout << "Die 1: " << value1 << " Die 2: " << value2 << " Correct Answer: " << total << endl << endl;
		}
		
	}

	return 0;
}