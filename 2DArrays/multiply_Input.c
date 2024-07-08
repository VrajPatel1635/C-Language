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
    int p;
    printf("Enter number of rows 2nd matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns 2nd matrix : ");
    scanf("%d", &q);
    int b[p][q];
    printf("Enter element of 2nd matrix :");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d" , &b[i][j]);
        }
    }
    int res[m][q];
    if(n != p) {
        printf("The matrices can not be multiplied!");
    } 
    else{
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                res[i][j] = 0;
                for(int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("The resultant matrix is : \n");
    for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    return 0;
}