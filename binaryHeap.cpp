//
//
#include <iostream>
#include "binaryHeap.h"

//contructor
BinaryHeap::BinaryHeap(){
	//v at 0 is not used
	v.append(NULL);
}

void BinaryHeap::insert(int k){
	v.append(k);
}

bool BinaryHeap::search(int k){
	//do something
}