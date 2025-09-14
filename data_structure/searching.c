#include <stdio.h>

// Linear Search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

// Binary Search (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int key = 7;

    int index = linearSearch(arr, n, key);
    if(index != -1) printf("Linear Search: %d found at index %d\n", key, index);
    else printf("Linear Search: %d not found\n", key);

    index = binarySearch(arr, n, key);
    if(index != -1) printf("Binary Search: %d found at index %d\n", key, index);
    else printf("Binary Search: %d not found\n", key);

    return 0;
}
