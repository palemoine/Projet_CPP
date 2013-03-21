/*
 * Ressource.cpp
 *
 *  Created on: 14 mars 2013
 *      Author: pa
 */

#include "Ressource.h"

// Constructeur par défault
Ressource::Ressource(): name(""), position(4,1) {}

// Constructeur paramétré
Ressource::Ressource(const string& _name, const Position& _position): name(_name), position(_position) {}

// Getteurs
const string& Element::getName() const { return name ; }

const Position& Element::getPosition() const {	return position ; }

// Setteurs
void Element::setPosition(const Position*& position) {
	this->position = position;
}

void Element::setName(const string& name) {
	this->name = name;
}
