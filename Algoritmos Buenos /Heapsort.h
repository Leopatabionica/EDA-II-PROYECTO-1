#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <stdbool.h>

extern int heapSize;

void HeapSort(int* A, int size);
void BuildHeap(int* A, int size);
void Heapify(int* A, int i, int size);

#endif
