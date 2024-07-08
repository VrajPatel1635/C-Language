#include<stdio.h>

void swap(int *x,int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
    return;
}

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("The value of A is %d", a);
    printf("The value of B is %d", b);

    return 0;
}