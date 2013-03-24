/*
 * Position.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */
#include <stdlib.h>
#include "Position.h"

// Constructeur par défault
Position::Position()
{
	int x = 0, y = -1, test = 0;
	//Fonction random
    const int min = 0 ;
    const int max = 10 ;

    x = min + (rand() % (max - min));

    while(y < min || y > max)
    {
    	test = 1 + (rand() % (3 - 1));
    	//cout << test;
		if(test == 1)
		{
			y = x + 2;
		}
		else
		{
			y = x - 2;
		}
	    positionX = x;
	    positionY = y;
    }

}

// Constructeur paramétré
Position::Position(unsigned int _positionX, unsigned int _positionY): positionX(_positionX), positionY(_positionY){}

// Getteurs
unsigned int Position::getPositionX()const{ return positionX ; }

unsigned int Position::getPositionY()const{ return positionY ; }

// Setteur
void Position::setPosition(unsigned int & _positionX, unsigned int & _positionY)
{
	this->positionX = _positionX;
	this->positionY = _positionY;
}

// Redéfinition de l'opérateur <
bool Position::operator <(const Position & p2) const
{
  return this->positionX < p2.positionX || (this->positionX == p2.positionX && this->positionY < p2.positionY);
}

// Redéfinition de l'opérateur <<
ostream& operator <<(ostream& Out, const Position& pos)
{
  Out << "(" << pos.getPositionX() << ";" << pos.getPositionY() << ")";
  return Out;
}

void Position::setPositionX(unsigned int positionX) {
	this->positionX = positionX;
}

void Position::setPositionY(unsigned int positionY) {
	this->positionY = positionY;
}

// Affichage de la position
void Position::afficherPosition()
{
  cout << "X : " << getPositionX() << " , Y : " << getPositionY() << endl;
}
