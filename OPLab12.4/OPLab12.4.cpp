#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

void MovingArray(int array[], int n) {
    int i, j, temp;

    for (i = 0; i < n; i++) {
        if (array[i] >= 0) {
            continue;
        }

        for (j = i + 1; j < n; j++) {
            if (array[j] >= 0) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                break;
            }
        }
    }
}

int main() {
    int n = 11;
    int array[] = { 3, -2, 1, -5, 4, -7, 6, -9, 8, -11, 10 };
    int i, positiveCount = 0, negativeCount = 0;

    for (i = 0; i < n; i++) {
        if (array[i] >= 0) {
            positiveCount++;
        }
        else {
            negativeCount++;
        }
    }

    MovingArray(array, n);

    printf("Масив після перестановки: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Кількість додатних елементів: %d\n", positiveCount);
    printf("Кількість від'ємних елементів: %d\n", negativeCount);

    return 0;
}
