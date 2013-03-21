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
	map.insert(pair<Position, unsigned>(pos, size() - 1)); // on utilise size car monde hérite de Vecteur
}

Monde::Monde() {
	map = new map<>;
}

//void Monde::afficher()const
//{
//	cout<<"Vector : "<<endl;
//	for (unsigned i=0 ; i< size() ; i++)
//	at(i)->afficher();
//	cout<<"Map : "<<endl;
//	map<PositionHex, unsigned int>::const_iterator Iter;
//	for(Iter=getMap().begin(); Iter!=getMap().end() ; Iter++)
//	cout<<Iter->first<<" "<<Iter->second<<endl;
//}

//unsigned int
//Monde::estValide(Position _pos) const
//{
//  unsigned int r = 0;
//  map<Position, unsigned int>::const_iterator it;
//  it = carte.end();
//  if (carte.find(_pos) != it)
//    r = 1;
//  return r;
//}
//
//void
//Monde::ajouter(Element * _elt)
//{
//  if (estValide(_elt->getPos()))
//  {
//    push_back(_elt); // ajoute un élément dans le vecteur
//    carte.insert(pair<Position, unsigned> (_elt->getPos(), size()-1)); // size() car Monde hérite de Vecteur
//  }
//}



