/* This c program will print number pattern which is below this line.
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/


#include<stdio.h>

int main() {
    int rows, number = 1, i, j;
    printf("Enter rows : ");
    scanf("%d", &rows);
    

    for( int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}