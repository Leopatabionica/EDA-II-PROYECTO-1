#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenamientos.h"
#include "utilerias.h"

int main() {
    srand(time(NULL));
    int tamanos[] = {100, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500};
    int opcion = 0;

    while (opcion != 4) {
        printf("\nMENU DE PRUEBAS\n");
        printf("1. Counting Sort: \n");
        printf("2. Radix Sort: \n");
        printf("3. Shell Sort (Algoritmo Extra):\n");
        printf("4. Salir\n");
        printf("Seleccione: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 3) {
            printf("\nTamaño\tPrueba 1\tPrueba 2\tPrueba 3\n");
            for (int i = 0; i < 10; i++) {
                int n = tamanos[i];
                printf("%d\t", n);
                for (int j = 0; j < 3; j++) {
                    int *arr = (int *)malloc(n * sizeof(int));
                    llenarAleatorio(arr, n);
                    ops = 0;
                    if (opcion == 1) countingSort(arr, n);
                    else if (opcion == 2) radixSort(arr, n);
                    else if (opcion == 3) shellSort(arr, n);
                    printf("%ld\t\t", ops);
                    free(arr);
                }
                printf("\n");
            }
        }
    }
    return 0;
}