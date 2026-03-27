#include <stdio.h>
#include "Quicksort.h"
#include "UtiBuenos.h"

int operaciones = 0;

int partition (int arr[], int low, int high){

   	int pivot = arr[high];    
	int i = (low - 1);
    int j;  
   	for (j = low; j <= high- 1; j++){

        operaciones++;
       	if (arr[j] <= pivot){
            operaciones++;
            i++;    
            swap(&arr[i], &arr[j]);
            operaciones++;
        }
    }
    swap(&arr[i + 1], &arr[high]);
    operaciones++;
	return (i + 1);
}

void quickSort(int arr[], int low, int high){

    operaciones++;
    if (low < high){
    	int pi = partition(arr, low, high);
	  	quickSort(arr, low, pi - 1);
	  	quickSort(arr, pi + 1, high);

    }
}
