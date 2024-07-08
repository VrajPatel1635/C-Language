#include<stdio.h>

int main() {
    int n;
    int fact = 1;
    int i;
    printf("enter number : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not available");
    } else {
        for(int i=1; i<=n; i++) {
            fact = fact * i;
        }
        printf("The factorial of %d is : %d", n, fact);
    }
    return 0;
}