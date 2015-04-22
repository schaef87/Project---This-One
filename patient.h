/*
 * patient.h
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

#ifndef PATIENT_H_
#define PATIENT_H_

#include "checkIn.h"
#include <string>

using namespace std;

class Patient : public CheckIn{
public:
	Patient(string n, int a, string spec);
	~Patient();

	void checkIn();
	void checkOut();

	string getName();
	string getSpec();

private:
	int timeIn;
	string spec;
	bool young();
};




#endif /* PATIENT_H_ */
