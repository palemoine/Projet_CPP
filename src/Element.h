/*
 * Element.h
 *
 *  Created on: 28 févr. 2013
 *      Author: pa
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
#include "Position.h"

using namespace std;

class Element {

private:
	string name;
	Position position;

public:
	Element();
	Element(const string&, const Position&);
	const string& getName() const;
	void setName(const string& name);
	const Position& getPosition() const;
	void setPosition(const Position& position);
	void afficherElement();
};

#endif /* ELEMENT_H_ */
