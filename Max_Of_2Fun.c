#include<stdio.h>

int maxTwo(int, int);

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int max = maxTwo(a, b);
    printf("Maximum number is %d", max);
    return 0;
}

int maxTwo(int a, int b) {
    
    return (a > b) ? a : b;
}