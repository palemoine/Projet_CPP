/*
 * Position.h
 *
 *  Created on: 28 févr. 2013
 *      Author: Pierre-André LEMOINE
 */

#ifndef POSITION_H_
#define POSITION_H_

using namespace std;
#include <iostream>

class Position {

private:
	unsigned int positionX;
	unsigned int positionY;

public:
	Position();
	Position(unsigned int, unsigned int);
	unsigned int getPositionX()const;
	unsigned int getPositionY()const;
	void setPosition(unsigned int & _positionX, unsigned int & _positionY);
	bool operator < (const Position & p2) const;
	void afficherPosition();
	void setPositionX(unsigned int positionX);
	void setPositionY( unsigned int positionY);
};
ostream & operator << (ostream & Out, const Position &pos);

#endif /* POSITION_H_ */
