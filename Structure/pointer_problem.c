#include<stdio.h>
typedef int* int_pointer;

int main() {
    int x = 4, y = 5;
    int_pointer a = &x, b = &y;
    printf("%u\n", a);
    printf("%d\n", b);
    return 0;
}