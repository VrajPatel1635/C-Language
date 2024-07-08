#include<stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main() {
    int  a, b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);

    swap(a,b);
    printf("A is %d", a);
    printf("B is %d", b);

    return 0;
}

