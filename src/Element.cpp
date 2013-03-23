/*
 * Element.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#include "Element.h"

using namespace std;

Element::Element(Monde * _monde): name("John Doe"), position(Position(4,1)) {
	monde = _monde;
}

// Constructeur paramétré
Element::Element(Monde * _monde, const string& _name, const Position& _position): name(_name), position(_position) {
	monde = _monde;
}

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

 Monde* Element::getMonde() {
	return monde;
}

// Affichage de l'élément
void Element::afficherElement() {
	cout << " Element : "<< getName() << ", Position : " << getPosition() << endl;
}
