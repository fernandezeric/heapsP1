#ifndef FIBONACCIHEAP_H
#define FIBONACCIHEAP_H

#include "Nodo.h"

class FibonacciHeap{
	protected:
		Nodo* min_heap; //asumiendo que es min-heap
	public:
		FibonacciHeap();
		~FibonacciHeap();
		void insertar(int v);
		//void merge(FibonacciHeap& heap);
		int getMin();
		Nodo* buscar(int b);
	private:
		Nodo* _union(Nodo* a, Nodo* b);
		Nodo* _buscar(Nodo* n, int b);
		//int tam;
};

#endif