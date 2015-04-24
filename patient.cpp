/*
 * Patient.cpp
 *
 *  Created on: Apr 24, 2015
 *      Author: schaeferj
 */

#include"patient.h"
#include<string>

using namespace std;

Patient::Patient(string n, int a, string s){
	name = n;
	spec = s;
	age = a;
}

string Patient::getName(){
	return name;
}

string Patient::getSpec(){
	return spec;
}
