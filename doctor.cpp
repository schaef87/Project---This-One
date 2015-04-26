/*
 * doctor.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

//#ifndef DOCTOR_CPP
//#define DOCTOR_CPP

#include "doctor.h"

Doctor::Doctor(string n, string s){
	name = n;
	spec = s;
}

Doctor::~Doctor(){
	delete this;
}

string Doctor::getName(){
	return name;
}

string Doctor::getSpec(){
	return spec;
}

void Doctor::roomAssign(int a){
	rmAssign = a;
}

int Doctor::getRoom(){
	return rmAssign;
}
;
//#endif		//#ifndef DOCTOR_CPP
