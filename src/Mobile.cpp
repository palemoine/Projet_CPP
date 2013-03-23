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
	  Position curPos = this->getPosition();
	  Position newPos(curPos);

	switch (dir){
		case NORD :
			newPos.setPositionY(newPos.getPositionY() + 2);
			break;

		case NORDEST :
			newPos.setPositionY(newPos.getPositionY() + 1);
			newPos.setPositionX(newPos.getPositionX() + 2);
			break;

		case NORDOUEST :
			newPos.setPositionY(newPos.getPositionY() + 1);
			newPos.setPositionX(newPos.getPositionX() - 2);
			break;

		case SUD :
			newPos.setPositionY(newPos.getPositionY() - 2);
			break;

		case SUDEST :
			newPos.setPositionY(newPos.getPositionY() - 2);
			newPos.setPositionX(newPos.getPositionX() + 2);
			break;

		case SUDOUEST :
			newPos.setPositionY(newPos.getPositionY() - 2);
			newPos.setPositionX(newPos.getPositionX() - 2);
			break;
	}
//	if estValide(newPos){
//
//	}else{
//		cout << "Position invalide"
//	}
	return true;
}

