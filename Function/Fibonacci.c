#include<stdio.h>

void fibonacci(int x) {
    int a = 0, b = 1, c;

    for(int i = 2; i <= x; i++) {
        printf("%d \t", a);
        c = a + b;
        a = b;
        b = c;

    }
    return;
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}