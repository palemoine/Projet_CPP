/*
 * Mobile.h
 *
 *  Created on: 15 mars 2013
 *      Author: victor
 */

#ifndef MOBILE_H_
#define MOBILE_H_
#include <string>
#include "Element.h"
#include "Monde.h"

using namespace std;

class Mobile : public Element{
private:
	unsigned int vitesse;
	unsigned int vision;

public:
	Mobile(Monde *_monde);
	bool seDeplacer(Direction);
	Position aTrouve(Position);
	int getVitesse() const;
	void setVitesse(int vitesse);
	unsigned int getVision() const;
	void setVision(unsigned int vision);
};

#endif /* MOBILE_H_ */
