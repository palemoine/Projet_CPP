/*
 * Ressource.h
 *
 *  Created on: 14 mars 2013
 *      Author: pa
 */

#ifndef RESSOURCE_H_
#define RESSOURCE_H_


using namespace std;

class Ressource : public Element {

private:
	string name;
	Position * position;

public:
	Ressource();
	Ressource(const string&, const Position&);
};

#endif /* RESSOURCE_H_ */
