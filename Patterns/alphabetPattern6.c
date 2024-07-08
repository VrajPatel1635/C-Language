//         A
//       A B A
//     A B C B A
//   A B C D C B A
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int a = 1;
        int b = 64+i-1;
        for(int q = n; q >= i; q--) {
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c ", a+64);
            a++;
        }
        for(int k = 1; k <= i-1; k++) {
            printf("%c ", b);
            b--;
        }
        printf("\n");
    }
    return 0;
}