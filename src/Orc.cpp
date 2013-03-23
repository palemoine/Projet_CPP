/*
 * Orc.cpp
 *
 *  Created on: 22 mars 2013
 *      Author: victor
 */

#include "Orc.h"

namespace std {

Orc::Orc() {}
Orc::Orc(const string& _name, const Position& _pos){
	this->setVision(1);
	this->setVitesse(1);
	this->setName(_name);
	this->setPosition(_pos);

}
Orc::Orc(const string& _name, const Position& _pos, const unsigned int& _vitesse, const unsigned int& _vision){
	this->setVision(_vision);
	this->setVitesse(_vitesse);
	this->setName(_name);
	this->setPosition(_pos);
}

} /* namespace std */
