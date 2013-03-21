/*
 * Mobile.cpp
 *
 *  Created on: 15 mars 2013
 *      Author: victor
 */

#include "Mobile.h"

Mobile::Mobile() {}

int Mobile::getVitesse() const {
	return vitesse;
}

unsigned int Mobile::getVision() const {
	return vision;
}

void Mobile::setVision(unsigned int vision) {
	this->vision = vision;
}

void Mobile::setVitesse(int vitesse) {
	this->vitesse = vitesse;
}


bool Mobile::seDeplacer(Direction dir){
	switch (dir){
		case NORD :
			//this->setPosition(getPositionX(), getPositionY()++);
			break;

		case NORDEST :

			break;

		case NORDOUEST :

			break;

		case SUD :

			break;

		case SUDEST :

			break;

		case SUDOUEST :

			break;
	}
	return true;
}

