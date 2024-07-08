// 1         1
//  2       2
//   3     3
//    4   4
//     5 5
//      6
//     5 5
//    4   4
//   3     3
//  2       2
// 1         1
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int a = n+1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i == j || i + j == n+1)) {
                if(i <= (n+1)/2) {
                printf("%d", i);
                }
                if(i > (n+1)/2 && i <= n) {
                    printf("%d", a-i);
                }
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

