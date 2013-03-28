/*
 * Bebe.cpp
 *
 *  Created on: 24 mars 2013
 *      Author: victor
 */

#include "Bebe.h"



Bebe::Bebe(Monde *_monde): Ressource(_monde){
	quantiteViande = 1;
	this->setName("bebe");
}
// Constructeur paramétré
Bebe::Bebe(Monde *_monde, const string& _name, const Position& _position):Ressource(_monde)
{
	this->setName(_name);
	this->setPosition(_position);
	quantiteViande = 1;
}

 /* namespace std */
