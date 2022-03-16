#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Die {

	//private instance variable
private:
	int value;

//2 public methods the no argument constructor and method to get die value
public:
	Die() {
		value = rand() % 6 + 1;
	}

	int DieValue() {
		return Die().value;
	}

};