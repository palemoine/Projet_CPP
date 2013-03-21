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

// Redefinition de l'operateur <
bool Position::operator <(const Position & p2) const
{
  return this->positionX < p2.positionX || (this->positionX == p2.positionX && this->positionY < p2.positionY);
}

ostream& operator <<(ostream& Out, const Position& pos)
{
  Out << "(" << pos.getPositionX() << ";" << pos.getPositionY() << ")";
  return Out;
}
