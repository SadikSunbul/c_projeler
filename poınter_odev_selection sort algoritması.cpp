#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int* arr, int size) {
    int i, j, temp;
    int* min;

    for (i = 0; i < size-1; i++) {
        min = &arr[i];
        for (j = i+1; j < size; j++) {
            if (*min < arr[j]) {
                min = &arr[j];
            }
        }
        temp = arr[i];
        arr[i] = *min;
        *min = temp;
    }
}

int main() {
    int i, arr[20];
    srand(time(NULL));  // Rastgele say� �reticiyi �nceden belirleyerek yeniden kullanmak i�in.

    // Diziye 0 ile 100 aras�nda rastgele de�erler ata
    for (i = 0; i < 20; i++) {
        arr[i] = rand() % 101;
        printf("%d ", arr[i]);  // S�ralanmam�� diziyi yazd�r
    }

    selection_sort(arr, 20);

    printf("\nS�ralanm�� dizi: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);  // S�ralanm�� diziyi yazd�r
    }

    return 0;
}

