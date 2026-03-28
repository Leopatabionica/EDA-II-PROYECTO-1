#include <stdio.h>
#include "ordenamientos.h"
#include "utilerias.h"

void insertionSort(int arr[], int n)
{
    int i, key, j;
    
    long operaciones = 0;
    
    for(i = 1; i < n; i++)
    {
        operaciones++;
        
        key = arr[i];
        operaciones++;
        
        j = i - 1;
        operaciones++;
        
        while(j >= 0 && arr[j] > key)
        {
            operaciones++;
            
            arr[j+1] = arr[j];
            operaciones++;
            
            j--;
            operaciones++;
        }
        arr[j+1] = key;
        operaciones++;
        
        //printf("Iteracion %d: ", i);
        //printArray(arr,n);
    }
    printf("Total operaciones: %ld\n", operaciones);
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    long operaciones = 0;
    
    for(i = 0; i < n-1; i++)
    {
        operaciones++;
        
        min = i;
        operaciones++;
        
        for(j = i+1; j < n; j++)
        {
            operaciones++;
            
            if(arr[j] < arr[min])
            {
                operaciones++;
                
                min = j;
                operaciones++;
            }
        }
        swap(&arr[i], &arr[min]);
        operaciones++;
        
        //printf("Iteracion %d: ", i+1);
        //printArray(arr,n);
    }
    printf("Total operaciones: %ld\n", operaciones);
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    int intercambio;
    long operaciones = 0;
    
    for(i = 0; i < n-1; i++)
    {
        operaciones++;
        
        intercambio = 0;
        operaciones++;
        
        for(j = 0; j < n-i-1; j++)
        {
            operaciones++;
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                operaciones++;
                
                intercambio = 1;
                operaciones++;
            }
        }
        
        //printf("Iteracion %d: ", i+1);
        //printArray(arr,n);
        
        if(intercambio == 0)
        {
            operaciones++;
            break;
        }
    }
    printf("Total operaciones: %ld\n", operaciones);

}