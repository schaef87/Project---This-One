/*
 * checkIn.h
 *
 *  Created on: Apr 22, 2015
 *      Author: schaeferj
 */

#ifndef CHECKIN_H_
#define CHECKIN_H_

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

class CheckIn{
public:
	virtual ~CheckIn();

	virtual void checkIn();
	virtual void checkOut();
	virtual int getTimeIn();

	virtual string getSpec();
	virtual string getName();

	virtual bool young(); //Is patient under 15 years of age.

// -- ROOM CLASS THINGS --
//	virtual bool isEmpty();
//	virtual int waiting();




};



#endif /* CHECKIN_H_ */
