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

int BinaryHeap::parent(int k){
	return int((k-1)/2);
}

void BinaryHeap::insert(int k){
	v.push_back(k);
	int n = v.size();
	while(n != v[1] && v[n] > parent(v[n])){
		cout<<"in while...\n";
		swap(v[n], v[parent(n)]);
		n = parent(n);
		//revisar diapos con formula
	}

}

bool BinaryHeap::search(int k){
	//do something
	return true;
}

//recibe un binaryheap y lo une al del objeto que lo llama.
void BinaryHeap::join(BinaryHeap bh){

}

BinaryHeap::~BinaryHeap(){
	v.clear();
	v.shrink_to_fit();
}