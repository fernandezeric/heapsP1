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
	int n = v.size();
	while(n != root && v[n] > parent(v[n])){
		swap v[n] con v[parent(n)]
		n = parent(n)
		//revisar diapos con formula
	}

}

bool BinaryHeap::search(int k){
	//do something
}

//recibe un binaryheap y lo une al del objeto que lo llama.
void BinaryHeap::join(BinaryHeap bh){

}