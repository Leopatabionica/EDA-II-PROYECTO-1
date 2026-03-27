#include <stdio.h>
#include "Heapsort.h"
#include "UtiBuenos.h"

int heapSize;
int operaciones = 0;

void HeapSort(int* A, int size){
	BuildHeap(A,size);
  	int i;
  	for(i = size - 1; i > 0; i--){
        operaciones++;
    	swap(&A[0],&A[heapSize]);
        operaciones++;      
      	heapSize--;
		Heapify(A, 0,size);
   }
}

void Heapify(int* A, int i, int size)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;

	if(l <= heapSize && A[l] > A[i]){
        operaciones++;
    	largest = l;
    }
  	else
    {
        operaciones++;
    	largest = i;
    }
  	if(r <= heapSize && A[r] > A[largest])
    {
        operaciones++;
    	largest = r;
    }
  	if(largest != i){
        operaciones++;
    	swap(&A[i],&A[largest]);
        operaciones++;
		//for(int k = 0; k < size; k++)
		//{
			//printf("%d ", A[k]);
		//}
		//printf("\n\n");
    	Heapify(A, largest,size);
     }
      
}

void BuildHeap(int* A, int size){
	heapSize = size - 1;
  	int i;
  	for(i = (size - 1) / 2; i >= 0; i--)
	{
		operaciones++;
		Heapify(A, i,size);

		//printf("  Estado actual: ");
        //for(int k = 0; k < size; k++)
		//{
			//printf("%d ", A[k]);
		//}
		//printf("\n\n");
  	}
}
