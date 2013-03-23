/*
 * TROLL.h
 *
 *  Created on: 22 mars 2013
 *      Author: victor
 */

#ifndef TROLL_H_
#define TROLL_H_
#include "Mobile.h"
#include <iostream>

namespace std {

class Troll :public Mobile {

	public:
		Troll();
		Troll(const Position&);
		Troll(const Position&, const unsigned int&, const unsigned int&);

	private:


};

} /* namespace std */
#endif /* TROLL_H_ */
