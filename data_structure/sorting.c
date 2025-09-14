#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Display array
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {5, 3, 8, 4, 2};
    int arr2[] = {9, 7, 6, 2, 1};
    int n = 5;

    printf("Original Array: ");
    display(arr1, n);

    bubbleSort(arr1, n);
    printf("Bubble Sorted: ");
    display(arr1, n);

    printf("Original Array: ");
    display(arr2, n);

    selectionSort(arr2, n);
    printf("Selection Sorted: ");
    display(arr2, n);

    return 0;
}

