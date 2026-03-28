#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilerias.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void llenarAleatorio(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
    }
}