/*
 * Element.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#include "Element.h"

using namespace std;

// Constructeur par défault
Element::Element(): name("John Doe"), position(Position(4,1)) {}

// Constructeur paramétré
Element::Element(const string& _name, const Position& _position): name(_name), position(_position) {}

// Getteurs
const string& Element::getName() const { return name ; }

const Position& Element::getPosition() const {	return position ; }

// Setteurs
void Element::setPosition(const Position& _position) {
	this->position = _position;
}

void Element::setName(const string& name) {
	this->name = name;
}

// Affichage de l'élément
void Element::afficherElement() {
	cout << " Element : "<< getName() << ", Position : " << getPosition() << endl;
}
