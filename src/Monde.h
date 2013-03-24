/*
 * Monde.h
 *
 *  Created on: 28 févr. 2013
 *      Author: victor
 */

#ifndef MONDE_H_
#define MONDE_H_

#include <iostream>
#include<vector>
#include<string>
#include<map>
#include"Position.h"
#include "Element.h"
using namespace std;



class Monde : public vector<Element *> {
private:
		map <Position, unsigned > laMap;
		unsigned int xMax;
		unsigned int yMax;


public:
		Monde();
		const map<Position, unsigned >&getMap() const;
		map<Position, unsigned >&getMap();

		void afficher() const;
		bool estValide(Position _pos) const;
		void ajouter(Element * _elem);
		unsigned int getXMax() const;
		void setXMax(unsigned int max);
		unsigned int getYMax() const;
		void setYMax(unsigned int max);
};


#endif /* MONDE_H_ */
