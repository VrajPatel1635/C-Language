#include<stdio.h>

int powerlog(int a, int b) {
    if(b == 1) return a;
    if
    int x = powerlog(a, b/2);
    int recAns = x * x;
    return recAns;
    
}

int main() {
    int a;
    printf("Enter a base : ");
    scanf("%d", &a);
    int b;
    printf("Enter a power : ");
    scanf("%d", &b);
    int p = powerlog(a, b);
    printf("%d raised to the power %d is %d", a, b, p);
    return 0;
}