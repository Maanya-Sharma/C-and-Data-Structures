#include <stdio.h>

#define SIZE 10
#define WINDOW 3

int main() {
    int signal[SIZE] = {5, 8, 6, 10, 12, 15, 14, 13, 12, 10};
    float smoothed[SIZE] = {0};

    printf("Original Signal: ");
    for (int i = 0; i < SIZE; i++) printf("%d ", signal[i]);

    // Moving Average Filter
    for (int i = 0; i < SIZE - WINDOW + 1; i++) {
        float sum = 0;
        for (int j = 0; j < WINDOW; j++) sum += signal[i + j];
        smoothed[i] = sum / WINDOW;
    }

    printf("\nSmoothed Signal: ");
    for (int i = 0; i < SIZE - WINDOW + 1; i++) printf("%.2f ", smoothed[i]);
    printf("\n");

    return 0;
}
