/*
 * Bebe.h
 *
 *  Created on: 24 mars 2013
 *      Author: victor
 */

#ifndef BEBE_H_
#define BEBE_H_
#include "Ressource.h"

 using namespace std ;

class Bebe : public Ressource {
public:
	Bebe(Monde *);
private:
	unsigned int quantiteViande;
};

 /* namespace std */
#endif /* BEBE_H_ */
