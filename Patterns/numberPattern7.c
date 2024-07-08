// This pattern will print in this code
// 1 2 3 4 5                                                                                                    
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number of n : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int sp = n; sp >= n; sp--) {
            printf(" ");
        }
        for(int j = 1; j <= n; j++) {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}