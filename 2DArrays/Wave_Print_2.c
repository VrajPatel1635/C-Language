#include<stdio.h>

int main() {
    int m;
    printf("Enter number of rows 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter number of columns 1st matrix : ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter element of 1st matrix :");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d" , &a[i][j]);
        }
    }


    // Wave Print
    for(int j = 0; j < n; j++) {
        if(j%2 == 0) {
            for(int i = m - 1; i >= 0; i--) {
            printf("%d ", a[i][j]);
            }
        } else {
            for(int i = 0; i < m; i++) {
            printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}