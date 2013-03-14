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

using namespace std;

class Monde {
	private
		map <Position, unsigned int> map;

	public:
		Monde();

		afficher()const;

};


#endif /* MONDE_H_ */
