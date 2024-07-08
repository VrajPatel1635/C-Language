#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++) {
        printf("%d X %d = %d \n", n, i, i*n);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d X %d = %d\n", n, i+1, (i+1)*n)
    }
    return 0;
}