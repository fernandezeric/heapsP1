/* C++11 binaryHeap.h
 * Declaracion de la clase binaryHeap
 * Las funciones están definidas en binaryHeap.cpp
 */
#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>

class BinaryHeap
{
private:
	std::vector<int> v;
	int parent(int k);

public:
	BinaryHeap();
	~BinaryHeap();
	void insert(int k);
	bool search(int k);
	void join(BinaryHeap bh); //check this params
};

#endif