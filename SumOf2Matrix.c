#include<stdio.h>

int main() {
    int r, c, a[100][100], b[100][100], /*sum[100][100]*/ i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter 1st array elements");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter 2st array elements");
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++) {
        for (int  j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d", sum[i][j]);
    //         if (j == 0)
    //         {
    //             printf("\n\n");
    //         }
            
    //     }
        
    // }

    return 0;
}