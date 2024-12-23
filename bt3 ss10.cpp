#include<stdio.h>

int main() {
    int arr[] = {9, 3, 5, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep la ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
