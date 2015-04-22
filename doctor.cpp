/*
 * doctor.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

#ifndef DOCTOR_CPP
#define DOCTOR_CPP

#include "doctor.h"

Doctor::Doctor(string n, int r, string s){
	name = n;
	roomPref = r;
	spec = s;
}

string Doctor::getName(){
	return name;
}

int Doctor::getRoom(){
	return roomPref;
}

string Doctor::getSpec(){
	return spec;
}
#endif		//#ifndef DOCTOR_CPP

void Doctor::checkIn(){

}

void Doctor::checkIn(){

}
