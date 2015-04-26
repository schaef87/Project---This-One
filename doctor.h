/*
 * doctor.h
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_

#include <string>

using namespace std;

class Doctor{
public:
	Doctor(string n, string s);
	~Doctor();

	void checkIn();
	void checkOut();
	void roomAssign(int a);

	string getName();
	int getRoom();
	string getSpec();

private:
	string name;
	string spec;
	int rmAssign;
};
#endif /* DOCTOR_H_ */
