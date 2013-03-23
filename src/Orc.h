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

namespace std {

class Orc :public Mobile {

	public:
		Orc();
		Orc(const string& , const Position&);
		Orc(const string&, const Position&, const unsigned int&, const unsigned int&);

	private:


};

} /* namespace std */
#endif /* ORC_H_ */
