//============================================================================
// Name        : Heaps.cpp
// Author      : Adam Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Heap.hpp"
#include "Planet.hpp"
#include "utilities.hpp"
#include <stdio.h>

using namespace std;


int main() {
	Heap Heapster;
	Planet* planet;


	Heapster.setType(0);
	//Heapster.setType(1);

	for(int i = 0; i < 9; i++){
		planet = new Planet();
		planet -> Key = getRandomInt(1,1000);
		Heapster.push_back(planet -> Key, planet);
	}

	unsigned int size = Heapster.size();
	for(int i = 0; i < size; i++){
		planet = Heapster.top();
		cout << "Key: " <<  planet -> Key << endl;
		cout << "Planet: " << planet -> name << endl;
		cout << "URL For Planet: " << planet -> URL << endl;
		delete Heapster.top();
		Heapster.pop();
		cout << "\n\n";
	}

	Heapster.deleteTheHeap();

	cout << "!!!Program Now Ending, Please Have A Good Day!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
