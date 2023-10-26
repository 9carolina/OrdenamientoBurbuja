#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ordenamientoBurbuja(int arr[], int n) {
    int i=0; int j;
    while (i<n-1) {
        j = 0;
        while (j<n-i-1) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    srand(time(NULL));
   
    int n;
    printf("Ingrese la cantidad de numeros que desea ordenar: ");
    scanf("%d", &n);

    int arreglo[n];
    int i=0;
    while (i<n) {
        arreglo[i]=rand()%101-50;
        i++;
    }

    printf("Arreglo original:\n");
    int j=0;
    while (j<n) {
        printf("%d ", arreglo[j]);
        j++;
    }

    ordenamientoBurbuja(arreglo, n);

    printf("\nArreglo ordenado:\n");
    int z=0;
    while (z<n) {
        printf("%d ", arreglo[z]);
        z++;
    }
    return 0;
}
