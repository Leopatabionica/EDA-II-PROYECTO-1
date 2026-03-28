#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utilerias.h"
#include "ordenamientos.h"

int main()
{

    int opcion;
    int *arr = NULL;
    int n = 0;

    srand(time(NULL));

    do
    {
        printf("\nMENU\n");
        printf("1. Nuevo arreglo\n");
        printf("2. InsertionSort\n");
        printf("3. SelectionSort\n");
        printf("4. BubbleSort\n");
        printf("5. Salir\n");
        
        printf("¿Que desea hacer?: ");
        scanf("%d",&opcion);
        
        switch(opcion)
        {
            case 1:
                
                printf("Tamano del arreglo: ");
                scanf("%d",&n);
                
                free(arr);
                arr = (int*) malloc(n * sizeof(int));
                
                llenarAleatorio(arr,n);
                
                printf("Arreglo generado:\n");
                printArray(arr,n);
                
                break;
                
            case 2:
                
                insertionSort(arr,n);
                printf("Resultado final:\n");
                printArray(arr,n);
                
                break;
                
            case 3:
                
                selectionSort(arr,n);
                printf("Resultado final:\n");
                printArray(arr,n);
                
                break;
                
            case 4:
                
                bubbleSort(arr,n);
                printf("Resultado final:\n");
                printArray(arr,n);
                
                break;
        }
    }
    while(opcion != 5);

    free(arr);

    return 0;
}