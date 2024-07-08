// 1234321
// 123 321
// 12   21
// 1     1
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for(int i = n-1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");

    for(int i = 1; i <= n-1; i++) {
        int a = 1;
        for(int j = n-1; j >= i; j--) {
            printf("%d", a);
            a++;
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf(" ");
        }
        a = a-1;
        for(int l = n-1; l >= i; l--) {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }    


    return 0;
}
