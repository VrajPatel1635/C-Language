#include <stdio.h>

int addNumbers(int);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum =  addNumbers(n);
        printf("Sum of first %d numbers = %d\n", n, sum);
    }
    return 0;
}

int addNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
