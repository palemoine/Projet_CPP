/*
 * Arbre.cpp
 *
 *  Created on: 23 mars 2013
 *      Author: pa
 */

#include "Arbre.h"

using namespace std;

// Constructeur par défaut
Arbre::Arbre(Monde *_monde): Ressource(_monde){
	quantiteBois = 1;
}

// Constructeur paramétré
Arbre::Arbre(Monde *_monde, const string& _name, const Position& _position):Ressource(_monde)
{
	this->setName(_name);
	this->setPosition(_position);
	quantiteBois = 1;
}





