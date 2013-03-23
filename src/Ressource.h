/*
 * Ressource.h
 *
 *  Created on: 14 mars 2013
 *      Author: pa
 */

#ifndef RESSOURCE_H_
#define RESSOURCE_H_


using namespace std;
#include <iostream>
#include "Element.h"


class Ressource : public Element {


public:
	Ressource(Monde *);
	Ressource(Monde *, const string&, const Position&);
};

#endif /* RESSOURCE_H_ */
