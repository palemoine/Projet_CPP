/*
 * Orc.cpp
 *
 *  Created on: 22 mars 2013
 *      Author: victor
 */

#include "Orc.h"

using namespace std;

Orc::Orc(Monde *_monde) : Mobile(_monde) {}
Orc::Orc(Monde *_monde, const string& _name, const Position& _pos): Mobile(_monde)
{
	this->setVision(1);
	this->setVitesse(1);
	this->setName(_name);
	this->setPosition(_pos);

}
Orc::Orc(Monde *_monde, const string& _name, const Position& _pos, const unsigned int& _vitesse, const unsigned int& _vision): Mobile(_monde)
{
	this->setVision(_vision);
	this->setVitesse(_vitesse);
	this->setName(_name);
	this->setPosition(_pos);
}
