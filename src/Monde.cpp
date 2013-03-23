/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: victor
 */

#include <stdlib.h>
#include "Monde.h"
#include "Orc.h"
#include <string>

Monde::Monde() {
	xMax = 12;
	yMax = 12;
	cout << "Monde créé.\n";

	for (int i = 0 ; i < 15 ; i++)
	{
		Position pos;
		Orc *orc1 = new Orc(this,"Orc des plaines", pos);
		push_back(orc1);
		laMap.insert(pair<Position, unsigned>(pos, size() - 1));
	}

	this->afficher();

}


void Monde::afficher()const
{
	cout<<"Vector : "<<endl;
	for (unsigned i=0 ; i< size() ; i++)
		at(i)->afficherElement();
	cout<<"Map : "<<endl;
	map<Position, unsigned int>::const_iterator Iter;
	 for (Iter = getMap().begin(); Iter != getMap().end(); Iter++)
		cout<<Iter->first<<" "<<Iter->second<<endl;
}

bool Monde::estValide(Position _pos) const
{
  bool posValide = true;

  map<Position, unsigned int>::const_iterator Iter;
  for (Iter = getMap().begin(); Iter != getMap().end(); Iter++)
  {
	  if((_pos.getPositionX() < 0 || _pos.getPositionX() > this->getXMax() || _pos.getPositionY() < 0 || _pos.getPositionY() > this->getYMax()) || (laMap.find(_pos) != laMap.end()))
		  posValide = false;
  }

  return (posValide);
}

unsigned int Monde::getXMax() const {
	return xMax;
}

void Monde::setXMax(unsigned int max) {
	xMax = max;
}

unsigned int Monde::getYMax() const {
	return yMax;
}

void Monde::setYMax(unsigned int max) {
	yMax = max;
}

void Monde::ajouter(Element * _element)
{
  if (estValide(_element->getPosition()))
  {
    push_back(_element); // Ajout de _element dans le vecteur
    laMap.insert(pair<Position, unsigned> (_element->getPosition(), size()-1));
  }
}

const map<Position, unsigned int>& Monde::getMap() const
{
  return laMap;
}

map<Position, unsigned int>& Monde::getMap()
{
  return laMap;
}



