/*
 * Position.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#include "Position.h"

// Constructeur par défault
Position::Position(): positionX(4), positionY(1){}
// Constructeur paramétré
Position::Position(int _positionX, int _positionY): positionX(_positionX), positionY(_positionY){}

// Getteurs
int Position::getPositionX()const{ return positionX ; }

int Position::getPositionY()const{ return positionY ; }

// Setteur
void Position::setPosition(int & _positionX, int & _positionY)
{
	this->positionX = _positionX;
	this->positionY = _positionY;
}
