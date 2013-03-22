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
#include"Element.h"
#include"Position.h"
using namespace std;



class Monde : public vector<Element *> {
private:
		map <Position, unsigned > laMap;

public:
		Monde();
		const map<Position, unsigned > getMap() const;
		void afficher() const;
		unsigned int estValide(Position _pos) const;
		void ajouter(Element * _elem);

};


#endif /* MONDE_H_ */
