#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "test.txt";
    char text[100];

    // Writing to file
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a sample file handling program.\n");
    fclose(fptr);

    // Reading from file
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }
    printf("Contents of %s:\n", filename);
    while (fgets(text, sizeof(text), fptr)) {
        printf("%s", text);
    }
    fclose(fptr);

    return 0;
}
