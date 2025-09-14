#include <stdio.h>

int add(int a, int b) { return a + b; }
int factorial(int n) { int res=1; for(int i=1;i<=n;i++) res*=i; return res; }

int main() {
    int x=5, y=3;
    printf("Sum: %d\n", add(x,y));
    printf("Factorial: %d\n", factorial(5));
    return 0;
}
