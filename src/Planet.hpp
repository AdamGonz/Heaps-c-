/*
 * Planet.hpp
 *
 *  Created on: Nov 8, 2017
 *      Author: adamgonzalez
 */

#ifndef PLANET_HPP_
#define PLANET_HPP_
#include <iostream>
using namespace std;

namespace std {
class Planet {
public:
	Planet();
	virtual ~Planet();
	int Key;
	string name;
	string URL;
	int random;


};
} /* namespace std */

#endif /* PLANET_HPP_ */
