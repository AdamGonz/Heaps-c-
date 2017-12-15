/*
 * heap.hpp
 *
 *  Created on: Nov 8, 2017
 *      Author: adamgonzalez
 */

#ifndef HEAP_HPP_
#define HEAP_HPP_
#include <vector>
#include<iostream>
#include "Planet.hpp"
using namespace std;


namespace std {
struct HeapNode{
	int First;
	Planet* Second;
};

class Heap {
public:
	Heap();
	virtual ~Heap();
	bool type;
    int vectorCount; //int to keep track for pop
    Planet* top(void); //going to give the top value of the node // Done
    void pop(void); //pops out the value of the current node // Done
    void push_back(int key, Planet*); //Done
    int size(void); //Done
    void setType(int);
    void deleteHeap(vector <HeapNode> &theHeap);
    void deleteTheHeap(void);


private:
    vector <HeapNode> theHeap; //declares a vector of HeapNodes
    void upHeap(vector<HeapNode> &theHeap); // Done
    void downHeap(vector <HeapNode> &theHeap); //progress


};

} /* namespace std */

#endif /* HEAP_HPP_ */
