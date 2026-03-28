#include "ordenamientos.h"
#include <stdlib.h>

long ops = 0;

Cola crearCola() {
    Cola c;
    c.primero = 0;
    c.ultimo = -1;
    return c;
}

int isEmpty2(Cola c) { return c.primero > c.ultimo; }

void encolar(Cola *c, int x) {
    if (c->ultimo < 4999) {
        c->ultimo++;
        c->lista[c->ultimo] = x;
        ops++; 
    }
}

int desencolar(Cola *c) {
    if (isEmpty2(*c)) return -1;
    int aux = c->lista[c->primero];
    c->primero++;
    ops++;
    return aux;
}

void countingSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        ops++;
    }
    int rango = max + 1; 
    int *count = (int *)calloc(rango, sizeof(int));
    int *ayuda = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        count[arr[i]]++; 
        ops++;
    }
    for (int i = 1; i < rango; i++) {
        count[i] = count[i] + count[i - 1];
        ops++;
    }
    for (int j = n - 1; j >= 0; j--) {
        int elemento = arr[j];
        int fin = count[elemento] - 1;
        ayuda[fin] = elemento;
        count[elemento]--;
        ops += 2;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ayuda[i];
        ops++;
    }
    free(count);
    free(ayuda);
}

void radixSort(int arr[], int size) {
    int dms;
    for (dms = 1; dms <= 1000; dms *= 10) {
        Cola botes[10];
        for(int i=0; i<10; i++) botes[i] = crearCola();
        for (int i = 0; i < size; i++) {
            int digito = (arr[i] / dms) % 10;
            encolar(&botes[digito], arr[i]);
            ops++;
        }
        int k = 0;
        for (int i = 0; i < 10; i++) {
            while (!isEmpty2(botes[i])) {
                arr[k++] = desencolar(&botes[i]);
                ops++;
            }
        }
    }
}

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            ops++;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
                ops += 2;
            }
            arr[j] = temp;
            ops++;
        }
    }
}