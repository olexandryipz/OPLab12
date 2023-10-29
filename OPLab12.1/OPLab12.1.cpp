#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

void SameElements(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Номери однакових елементів в масиві: %d та %d\n", i, j);
                return;
            }
        }
    }
    printf("Немає однакових елементів\n");
}

int main() {
    int N, i;
    printf("Введіть розмір масиву: ");
    scanf_s("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));

    printf("Введіть елементи масиву: ");
    for (i = 0; i < N; i++) {
        scanf_s("%d", &arr[i]);
    }

    SameElements(arr, N);

    free(arr);

    return 0;
}