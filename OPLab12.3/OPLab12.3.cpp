#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

void removeDuplicates(int array[], int* n) {
    int i, j, k;

    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n;) {
            if (array[j] == array[i]) {
                for (k = j; k < (*n) - 1; k++) {
                    array[k] = array[k + 1];
                }
                (*n)--;
            }
            else {
                j++;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Введіть розмір масиву: ");
    scanf_s("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));

    printf("Введіть елементи масиву: ");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    removeDuplicates(array, &n);

    printf("Масив після видалення усіх однакових елементів: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}