/*
 * Troll.cpp
 *
 *  Created on: 22 mars 2013
 *      Author: victor
 */

#include "Troll.h"

namespace std {

Troll::Troll() {}
Troll::Troll( const Position& _pos){
	this->setVision(1);
	this->setVitesse(1);
	this->setPosition(_pos);
}

Troll::Troll( const Position& _pos, const unsigned int& _vitesse, const unsigned int& _vision){
	this->setVision(_vision);
	this->setVitesse(_vitesse);
	this->setPosition(_pos);
}

} /* namespace std */
