//      1
//     A A
//    2 2 2
//   B B B B
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int a = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            if(i%2 != 0) {
                printf(" %d", i/2+1);
            } else{
                printf(" %c", a+64);
            }
        }
        if(i % 2 == 0) {
            a++;
        }
        printf("\n");
    }
    return 0;
} 
