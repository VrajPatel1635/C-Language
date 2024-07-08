/* This c program will print number pattern which is below this line.

1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
*/


#include<stdio.h>

int main() {
    int row, i, j, number=1, space;
    printf("Enter the number of row : ");
    scanf("%d", &row);

    for(int i=0; i<row; i++) {
        for(int space = 1; space<=row; space++) 
            printf(" ");
        for(int j=0; j<=i; j++) {
            if(j==0 || i==0) 
                number=1;
            else 
                number = number * (i - j + 1) / j;
                printf("%4d", number);
            
            
        }
        
        printf("\n");
    }
    return 0;
}