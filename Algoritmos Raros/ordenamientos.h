#ifndef ORDENAMIENTOS_H
#define ORDENAMIENTOS_H

typedef struct {
    int primero;
    int ultimo;
    int lista[5000]; 
} Cola;

extern long ops;

Cola crearCola();
int isEmpty2(Cola c);
void encolar(Cola *c, int x);
int desencolar(Cola *c);

void countingSort(int arr[], int n);
void radixSort(int arr[], int size);
void shellSort(int arr[], int n);

#endif