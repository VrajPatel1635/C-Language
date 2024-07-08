// *********
// **** ****
// ***   ***
// **     **
// *       *
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1; i <= 2*n+1; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            printf("*");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf(" ");
        }
        for(int j = n; j >= i; j--) {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}