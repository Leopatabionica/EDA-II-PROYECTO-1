#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "Quicksort.h"

int main()
{
    int tamaño = 100;

    int *arreglo = (int *)malloc(tamaño * sizeof(int));

    scrand(time(NULL));

    for(int i = 0; i<tamaño; i++)
    {
        arreglo [i] = rand() % 2500;
    }
    int size = sizeof(arreglo)/( sizeof(arreglo[0]));

    quicksort(arreglo, 0, size-1);
    

}
