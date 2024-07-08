#include<stdio.h>

int main() {
    int a[5] = {1,1,2,1,2};
    printf("%u\n", &a[0]);
    printf("%u\n", &a[1]);
    printf("%u\n", &a[2]);
    printf("%u\n", &a[3]);
    printf("%u\n", &a[4]);
    return 0;
}