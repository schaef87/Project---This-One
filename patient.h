/*
 * patient.h
 *
 *  Created on: Apr 24, 2015
 *      Author: schaeferj
 */

#ifndef PATIENTS_H_
#define PATIENTS_H_

#include <string>

using namespace std;

class Patient{
public:
	Patient(string n, int a, string s);
	~Patient();

	string getName();
	string getSpec();

private:
	string name;
	string spec;
	int age;
};




#endif /* PATIENTS_H_ */
