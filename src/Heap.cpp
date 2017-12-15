/*
 * Heap.cpp
 *
 *  Created on: Nov 8, 2017
 *      Author: adamgonzalez
 */

#include "Heap.hpp"

#include<iostream>
#include <vector>

using namespace std;

namespace std {

Heap::Heap() {
	// TODO Auto-generated constructor stub
	vectorCount = 1;
	type = true;
}

Heap::~Heap() {
	// TODO Auto-generated destructor stub
}
/*********************************************\
				Public Functions
\*********************************************/
Planet* Heap::top(void){//done
	return theHeap[0].Second;
}

void Heap::pop(void){//fixing not working
	theHeap[0] = theHeap.back();
	theHeap.pop_back();
	downHeap(theHeap);
}

void Heap::push_back(int key, Planet* planets){//done
	HeapNode ptr;
	if(theHeap.empty()){
		ptr.First = key;
		ptr.Second = planets;
		theHeap.push_back(ptr);
	}
	else{
		ptr.First = key;
		ptr.Second = planets;
		theHeap.push_back(ptr);
		upHeap(theHeap);
	}
}

int Heap::size(void){//done
	return theHeap.size();
}

void Heap::setType(int choice){//done
	if(choice == 0){
		type = true;
	}
	else{
		type = false;
	}
}

void Heap::deleteTheHeap(){
	 deleteHeap(theHeap);
}
/*********************************************\
				Private Functions
\*********************************************/
void Heap::upHeap(vector<HeapNode> &theHeap){//done already set for min heap
	int loop = theHeap.size();
	int size = theHeap.size() - 1;
	int count = ((size - 1) / 2);
	if(type){
		while(loop >= 1 && count >= 0){
			if(theHeap[count].Second -> Key > theHeap[size].Second -> Key){
				swap(theHeap[size], theHeap[count]);
				size = count;
				count = (size - 1) /2;
				loop--;
			}
			else{
				size = count;
				count = (size - 1) /2;
				loop--;
			}
		}
	}
	else{
		while(loop >= 0 && count >= 0){
			if(theHeap[count].Second -> Key < theHeap[size].Second -> Key){
				swap(theHeap[size], theHeap[count]);
				size = count;
				count = (size - 1) /2;
				loop--;
			}
			else{
				size = count;
				count = (size - 1) /2;
				loop--;
			}
		}
	}
}

void Heap::downHeap(vector<HeapNode> &theHeap){//needs work
	int loop = theHeap.size();
	int size = 0;
	int countL = (size * 2) + 1;
	int countR = (size * 2) + 2;
	int temp;
	if(type){
		while(loop >= 0 && countL <= theHeap.size() && countR <= theHeap.size()){
			if(countR >= theHeap.size()){
				temp = countL;
			}
			if(countL >= 0  && countR >= 0 && theHeap[countL].Second -> Key < theHeap[countR].Second -> Key){
				temp = countL;
			}
			if(countL >= 0 && countR >= 0 && theHeap[countR].Second -> Key < theHeap[countL].Second -> Key){
				temp = countR;
			}
			if(theHeap[size].Second -> Key > theHeap[temp].Second -> Key){
				swap(theHeap[size], theHeap[temp]);
				size = temp;
				countL = (2 * size) + 1;
				countR = (2 * size) + 2;
				loop--;
			}
			else{
				size = temp;
				countL = (2 * size) + 1;
				countR = (2 * size) + 2;
				loop--;
			}
		}
	}
	else{
		while(loop >= 0 && countL <= theHeap.size() && countR <= theHeap.size()){
			if(countR >= theHeap.size()){
				temp = countL;
			}
			if(countL >= 0  && countR >= 0 && theHeap[countL].Second -> Key > theHeap[countR].Second -> Key){
				temp = countL;
			}
			if(countL >= 0 && countR >= 0 && theHeap[countR].Second -> Key > theHeap[countL].Second -> Key){
				temp = countR;
			}
			if(theHeap[size].Second -> Key < theHeap[temp].Second -> Key){
				swap(theHeap[size], theHeap[temp]);
				size = temp;
				countL = (2 * size) + 1;
				countR = (2 * size) + 2;
				loop--;
			}
			else{
				size = temp;
				countL = (2 * size) + 1;
				countR = (2 * size) + 2;
				loop--;
			}
		}
	}

}

void Heap::deleteHeap(vector <HeapNode> &theHeap){
	vector<HeapNode>::iterator it = theHeap.begin();
	while(!theHeap.empty()){
		theHeap.erase(it);
		it++;
	}

}

/* namespace std */
}
//Still Need To Get Url Working
