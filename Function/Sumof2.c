#include<stdio.h>
int add(int a, int b) {
    return a+b;
}

int main() {
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    int sum = add(a,b);
    printf("%d", sum);
    return 0;
}