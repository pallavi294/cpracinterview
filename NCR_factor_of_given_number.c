#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int ncr(int n, int r) {
    int ncr;
    ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("The NCR factor of %d and %d is %d\n", n, r, ncr(n, r));
    return 0;
}

