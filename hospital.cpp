/*
 * hospital.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "doctor.h"
#include "patient.h"

int main (){

	char regType;

	cout << "Wecome! Please follow our guided check-in process" << endl;
	cout << endl;
	cout << "Please type \"D\" if you are a doctor, or \"P\" if you are a patient." << endl;

	cin >> regType;
	while (regType != 'D' && regType != 'd' && regType != 'P'&& regType != 'p'){
		cout << "Invalid selection. Please try again." << endl;
		cin >> regType;
	}

	regType = toupper(regType);

	if(regType == 'D'){
		string name;
		int room;
		string spec;

		cout << "What is your name?" << endl;
		cin >> name;
		cout << "What is your specialty" << endl;
		cin >> spec;
		cout << "What room would you prefer?" << endl;
		cin >> room;

		Doctor doc = new Doctor(name, room, spec);
	}

} //END MAIN
