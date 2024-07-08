#include<stdio.h>

int main() {
    int a = 5;
    int *x = &a;
    // VVIP ---->   *x = 7; a is changed.
    int **y = &x;  //int **  ---> int * will store address.
    printf("%p\n", x); // %p is print address.
    printf("%p\n", y);

    return 0;
}