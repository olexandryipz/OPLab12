#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

void MovingElements(int array[], int n) {
    int firstElementArray = array[0];
    int i, j, temp;

    for (i = 1; i < n; i++) {
        if (array[i] > firstElementArray) {
            temp = array[i];
            j = i - 1;

            while (j >= 0 && array[j] <= firstElementArray) {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = temp;
        }
    }

    for (i = n - 1; i > 0; i--) {
        if (array[i] <= firstElementArray) {
            temp = array[i];
            j = i + 1;

            while (j < n && array[j] > firstElementArray) {
                array[j - 1] = array[j];
                j++;
            }

            array[j - 1] = temp;
        }
    }
}

int main() {
    int n = 14;
    int array[] = { 7, 3, 9, 2, 5, 8, 1, 10, 6, 4, 11, 13, 12, 15 };
    int i;

    printf("Вхідний масив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    MovingElements(array, n);

    printf("Вихідний масив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}