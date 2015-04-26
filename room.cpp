/*
 * room.cpp
 *
 *  Created on: Apr 24, 2015
 *      Author: schaeferj
 */

#include"room.h"
#include "patient.h"
#include "QueueLinked.h"

#include<string>

using namespace std;

Room::Room(int n, bool d){
	roomNum = n;
	doc = d;
	QueueLinked<Patient> rmOccupants; // = new QueueLinked<Patient>();
}

Room::~Room(){
	delete this;
}

bool Room::hasDr(){
	return doc;
}

int Room::getRoomNum(){
	return roomNum;
}

int Room::getWaiting(){
	return rmOccupants.getLength();
}

void Room::setRoomState(bool s){
	if(s == false){
		doc = s;
	} else {
		doc = s;
	}
}

	void Room::setRoomNum(int r){
		roomNum = r;
	}
