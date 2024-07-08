/* This c program will print number pattern which is below this line.

0
1 1
2 2 2
3 3 3 3
4 4 4 4 4*/


#include<stdio.h>

int main() {
    int i, j, row;
    printf("Enter a number of row: ");
    scanf("%d", &row);

    for(int i=0; i<row; i++) {
        for(int j=0; j<=i+0; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}