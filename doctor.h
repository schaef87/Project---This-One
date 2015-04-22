/*
 * doctor.h
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_

#include "checkIn.h"
#include <string>

using namespace std;

class Doctor : public CheckIn{
public:
	Doctor(string n, int r, string s);
	~Doctor();

	void checkIn();
	void checkOut();

	string getName();
	int getRoom();
	string getSpec();

private:
	string name;
	int roomPref;
	string spec;
};
#endif /* DOCTOR_H_ */
