/*
 * Arbre.h
 *
 *  Created on: 23 mars 2013
 *      Author: pa
 */

#ifndef ARBRE_H_
#define ARBRE_H_
#include "Ressource.h"
#include <iostream>
using namespace std;

class Arbre : public Ressource {
private:
	int quantiteBois;

public:
	Arbre(Monde *);
	Arbre(Monde *, const string&, const Position&);
	int getQuantiteBois()const;
};

#endif /* ARBRE_H_ */
