/* C++11 binaryHeap.h
 * Declacracion de la clase binaryHeap
 * Las funciones están definidas en binaryHeap.cpp
 */
#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>

class BinaryHeap
{
private:
	std::vector<int> v;

public:
	BinaryHeap();
	~BinaryHeap();
	void insert(int k);
	void search(int k);
	void join(); //check this params
};

#endif