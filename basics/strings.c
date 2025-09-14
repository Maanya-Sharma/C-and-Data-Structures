#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    // Concatenate
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // Length
    printf("Length: %lu\n", strlen(str1));

    return 0;
}

