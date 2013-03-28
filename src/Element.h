/*
 * Element.h
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
#include <iostream>
#include "Position.h"

using namespace std;

class Monde;

class Element {

private:
	string name;
	Position position;
	Monde * monde;

public:
	typedef enum {NORD, NORDEST, NORDOUEST, SUD, SUDEST, SUDOUEST} Direction;
	Element(Monde * );
	Element(Monde *, const string&, const Position&);
	const string& getName() const;
	void setName(const string& name);
	const Position& getPosition() const;
	void setPosition(const Position& );
	void afficherElement();
	 Monde* getMonde();
	 virtual bool seDeplacer(Direction);
};

#endif /* ELEMENT_H_ */
