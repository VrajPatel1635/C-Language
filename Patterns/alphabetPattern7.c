// ABCDEFG
// ABC EFG
// AB   FG
// A     G
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int nst = n-1;
    int nsp = 1;
    for(int i = 1; i <= 2*n-1; i++) {
        printf("%c",i+64);
    }
    printf("\n");
    for(int i = 1; i <= n-1; i++) {
        int a = 1;
        for(int j = 1; j <= nst; j++) {
            printf("%c", a+64);
            a++;
        }
        for(int k = 1; k <= nsp; k++) {
            printf(" ");
            a++;
        }
        for(int j = 1; j <= nst; j++) {
            printf("%c",a+64);
            a++;
        }
        nst--;
        nsp+=2;
    printf("\n");
    }
    return 0;
}
