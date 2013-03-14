/*
 * Element.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#include "Element.h"

using namespace std;

// Constructeur par défault
Element::Element(): name(""), position(4,1) {}

// Constructeur paramétré
Element::Element(const string& _name, const Position& _position): name(_name), position(_position) {}

// Getteurs
const string& Element::getName() const { return name ; }

const Position*& Element::getPosition() const {	return position ; }

// Setteurs
void Element::setPosition(const Position*& position) {
	this->position = position;
}

void Element::setName(const string& name) {
	this->name = name;
}
