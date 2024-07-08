#include<stdio.h>

int main() {
    int a = 6;
    int *b = &a;
    int **c = &b;

    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    printf("value of c is %d\n", c);

    printf("address of %d is %u\n", a, &a);
    printf("address of b is %u\n", c);
    printf("address of c is %d\n", &c);
    return 0;
}