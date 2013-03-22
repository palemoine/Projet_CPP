/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: victor
 */

#include "Monde.h"

Monde::Monde() {
	cout << "Monde créé.\n";
	Position pos(2,2);
	Element * elem= new Element ("Orc", pos);
	push_back(elem);
	laMap.insert(pair<Position, unsigned>(pos, size() - 1));
}


void Monde::afficher()const
{
	cout<<"Vector : "<<endl;
	for (unsigned i=0 ; i< size() ; i++)
		at(i)->afficherElement();
	cout<<"Map : "<<endl;
	map<PositionHex, unsigned int>::const_iterator Iter;
	for(Iter=getMap().begin(); Iter!=getMap().end() ; Iter++)
		cout<<Iter->first<<" "<<Iter->second<<endl;
}

unsigned int Monde::estValide(Position _pos) const
{
  unsigned int r = 0;
  map<Position, unsigned int>::const_iterator it;
  it = laMap.end();
  if (laMap.find(_pos) != it)
    r = 1;
  return r;
}

void Monde::ajouter(Element * _element)
{
  if (estValide(_element->getPosition()))
  {
    push_back(_element); // Ajout _element dans le vecteur
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



