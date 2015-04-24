/*
 * room.h
 *
 *  Created on: Apr 24, 2015
 *      Author: schaeferj
 */

#ifndef ROOM_H_
#define ROOM_H_

#include<string>
#include "doctor.h"
#include "QueueLinked.h"
#include "patient.h"

using namespace std;

class Room{
public:
	Room(int n, bool d);
	~Room();

	bool hasDr();
	int getRoomNum();
	int getWaiting();
	void setRoomNum(int r);
	void setRoomState(bool s);

private:
	int roomNum;
	bool doc;

	QueueLinked<Patient> rmOccupants;

};
#endif /* ROOM_H_ */
