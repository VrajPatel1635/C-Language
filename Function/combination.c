#include<stdio.h>

int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int r;
    printf("Enter r : ");
    scanf("%d", &r);

    


    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d", nCr);
    return 0;
}