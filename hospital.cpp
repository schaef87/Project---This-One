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
#include <vector>

#include "doctor.h"
#include "patient.h"
#include "room.h"
#include "QueueLinked.h"

int main (){
	vector<Room> rooms;
	rooms[25];

	for(int x = 0;x < 25;x++){
	rooms.at(x).setRoomNum(x+1);
	rooms.at(x).setRoomState(false);
	}

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

		while(rooms.at(room).hasDr()){
			cout << "Room occupied." << endl;
			cout << "Please select another room." << endl;
			cin >> room;
		}

		rooms.at(room).setRoomState(true);

		Doctor* doc = new Doctor(name, spec);
	}

} //END MAIN
