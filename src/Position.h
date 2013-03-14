/*
 * Position.h
 *
 *  Created on: 28 févr. 2013
 *      Author: Pierre-André LEMOINE
 */

#ifndef POSITION_H_
#define POSITION_H_

using namespace std;

class Position {

private:
	int positionX;
	int positionY;

public:
	Position();
	Position(int, int);
	int getPositionX()const;
	int getPositionY()const;
	void setPosition(int & _positionX, int & _positionY);
};

#endif /* POSITION_H_ */