/*
 * Planet.cpp
 *
 *  Created on: Nov 8, 2017
 *      Author: adamgonzalez
 */

#include "Planet.hpp"
#include "utilities.hpp"

namespace std {

Planet::Planet() {
	// TODO Auto-generated constructor stub
	string namePlanets[9] = {"Venus", "Uranus", "Neptune", "Pluto", "Earth", "Mars", "Jupiter", "Saturn", "Mercury" };
	Key = 0;
	random = getRandomInt(0,8);
    name = namePlanets[random];
    string URLName[9] = {"https://goo.gl/images/QgeuUu", "https://goo.gl/images/Mh7c37", "https://goo.gl/images/3BJfr6",
    					"https://goo.gl/images/sPrMWB","https://goo.gl/images/FjQseJ", "https://goo.gl/images/2WYskj", "https://goo.gl/images/6gh4Uj"
    					"https://goo.gl/images/ktvMeh","https://goo.gl/images/6jG2DM" };
    URL = URLName[random];
}

Planet::~Planet() {
	// TODO Auto-generated destructor stub
	cout << "Now Deleteing  Planet " << name << endl;
 }

} /* namespace std */
