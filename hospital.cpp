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

		Doctor* doc = new Doctor(name, spec);

		rooms.at(room).setRoomState(true);   //Sets room occupied by doctor
		doc->rmAssign=room;					 //Assigns room number to doctor

	} else if(regType == 'P'){
		string name;
		int age;
		string spec;

		cout << "What is your name?" << endl;
		cin >> name;
		cout << "What is your age" << endl;
		cin >> age;

		if(age > 15){
			cout << "What type of doctor would you like to see?" << endl;
			cin >> spec;
		} else {
			spec = "ped";
		}

		Patient* pat = new Patient(name, age, spec);

		for(int x=0;x<25;x++){
			if(rooms.at(x).hasDr()){
				if(/*GET DR INFO HERE*/ == spec){
					enqueue(patient);
				}
				cout << "We are sorry, we do not have the required specialits on duty at this moment"
						<< endl;
				}
			}
		}

	}


} //END MAIN
