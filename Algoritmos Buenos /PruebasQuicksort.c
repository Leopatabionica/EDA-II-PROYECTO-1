#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Quicksort.h"
#include "UtiBuenos.h"

extern int operaciones;

int* generarArregloAleatorio(int n) {
    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Error de memoria\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 2500;
    }

    return arr;
}

int main() {

    srand(time(NULL));

    for (int n = 0; n <= 5000; n+=100) {

        int *arr = generarArregloAleatorio(n);

        operaciones = 0;

        quickSort(arr, 0, n - 1);

        printf("n = %d -> operaciones = %d\n", n, operaciones);

        free(arr);
    }

    return 0;
}
