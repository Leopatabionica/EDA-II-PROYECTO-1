#include "utilerias.h"
#include <stdlib.h>

void llenarAleatorio(int arr[], int n) {
    for (int i = 0; i < n; i++) arr[i] = rand() % 1000;
}