// 1 
// 3 5 
// 7 9 11
#include<stdio.h>

int main() {
    int n, num = 1;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = num+2;
        }
        printf("\n");
    }
    return 0;
}