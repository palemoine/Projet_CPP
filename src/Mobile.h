/*
 * Mobile.h
 *
 *  Created on: 15 mars 2013
 *      Author: victor
 */

#ifndef MOBILE_H_
#define MOBILE_H_
#include "Element.h"

namespace std {

class Mobile : public Element{
private:
	typedef enum {NORD, NORDEST, NORDOUEST, SUD, SUDEST, SUDOUEST} Direction;
	unsigned int vitesse;
	unsigned int vision;

public:
	Mobile();
	bool seDeplacer(Direction);
	int getVitesse() const;
	void setVitesse(int vitesse);
	unsigned int getVision() const;
	void setVision(unsigned int vision);
};

} /* namespace std */
#endif /* MOBILE_H_ */
