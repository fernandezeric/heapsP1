//
//
#include <iostream>
#include "binaryHeap.h"

using namespace std;

//contructor
BinaryHeap::BinaryHeap(){
	//v at 0 is not used
	v.push_back((int)NULL);
}

void BinaryHeap::insert(int k){
	v.push_back(k);
	int n = v.size();
	/*
	while(n != root && v[n] > parent(v[n])){
		swap v[n] con v[parent(n)]
		n = parent(n)
		//revisar diapos con formula
	}
	*/

}

bool BinaryHeap::search(int k){
	//do something
	return true;
}

//recibe un binaryheap y lo une al del objeto que lo llama.
void BinaryHeap::join(BinaryHeap bh){

}