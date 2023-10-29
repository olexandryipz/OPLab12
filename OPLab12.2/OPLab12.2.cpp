#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

void mergeArrays(int arrayA[], int arrayB[], int n1, int n2, int mergedArrays[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arrayA[i] < arrayB[j])
            mergedArrays[k++] = arrayA[i++];
        else
            mergedArrays[k++] = arrayB[j++];
    }

    while (i < n1)
        mergedArrays[k++] = arrayA[i++];

    while (j < n2)
        mergedArrays[k++] = arrayB[j++];
}

int main() {
    int arrayA[] = { 1, 3, 5, 7, 9 };
    int arrayB[] = { 2, 4, 6, 8, 10 };
    int mergedArrays[10];
    int n1 = sizeof(arrayA) / sizeof(arrayA[0]);
    int n2 = sizeof(arrayB) / sizeof(arrayB[0]);

    mergeArrays(arrayA, arrayB, n1, n2, mergedArrays);

    printf("Результуючий масив C: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArrays[i]);
    }
    printf("\n");

    return 0;
}