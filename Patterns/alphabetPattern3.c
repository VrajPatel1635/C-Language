// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D
// A B C
// A B
// A
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);  

    for(int i = 1; i <= n; i++) {
        int a = 1;
        for(int j = 1; j <= i; j++) {
            printf("%c ", a+64); 
            a++;
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        int a = 1;
        for(int j = 1; j <= i; j++) {
            printf("%c ", a+64);
            a++;
        }
        printf("\n");
    }
    return 0;
}