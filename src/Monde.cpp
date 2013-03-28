/*
 * Monde.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: victor
 */

#include <stdlib.h>
#include "Monde.h"
#include "Arbre.h"
#include "Bebe.h"
#include "Orc.h"
#include <string>
#include <typeinfo>

Monde::Monde() {
	int nbMobile=0, nbNourriture=0, nbBois=0, nbJour=0;
	char suivant;
	xMax = 12;
	yMax = 12;
	cout << "Monde créé.\n";

	do{
		Position pos,pos2,pos3;

		//Crée les éléments Orc
			Orc *orc = new Orc(this,"Orc des plaines", pos);
			ajouter(orc);
			laMap.insert(pair<Position, unsigned>(pos, size() - 1));
			nbMobile++;

		//Crée les éléments Arbres
			Arbre *abr = new Arbre(this,"Arbre feuillu", pos2);
			ajouter(abr);
			laMap.insert(pair<Position, unsigned>(pos2, size() - 1));
			nbBois++;

		//Crée les éléments Bebes
			Bebe *bebe = new Bebe(this,"Bebe hypertrophié", pos3);
			ajouter(bebe);
			laMap.insert(pair<Position, unsigned>(pos3, size() - 1));
			nbNourriture++;


		//Deplacements
//			map<Position, unsigned int>::const_iterator Iter;
//			for (Iter = getMap().begin(); Iter != getMap().end(); Iter++)

			orc->seDeplacer(Mobile::SUD );


			cout<<"Tour suivant : s   |    Fin : f" << endl;
			cin>> suivant;
			cout << "____________Jour " << nbJour << "____________"<< endl << "---> Nombre d'elements mobiles : " << nbMobile << endl << "---> Nombre d'arbres : " << nbBois << endl << "---> Nombre de bébés : " << nbNourriture <<endl;
			nbJour++;
		}while(suivant != 'f');



	this->afficher();
//	for (int i = 0 ; i < 5 ; i++)
//	{
//		map<Position, unsigned int>::const_iterator Iter;
//		for (Iter = getMap().begin();Iter != getMap().end(); Iter++){
//
//		}
//
//	}
	//Nous souhaitons faire une boucle permettant de déplacer tous les  elements


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



