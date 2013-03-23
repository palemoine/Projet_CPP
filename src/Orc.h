/*
 * Orc.h
 *
 *  Created on: 22 mars 2013
 *      Author: victor
 */

#ifndef ORC_H_
#define ORC_H_
#include "Mobile.h"
#include <iostream>


using namespace std;

class Orc :public Mobile {

	public:
		Orc(Monde *);
		Orc(Monde *, const string& , const Position&);
		Orc(Monde *, const string&, const Position&, const unsigned int&, const unsigned int&);

	private:


};


#endif /* ORC_H_ */
