/* This c program will print number pattern which is below this line.

        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
*/


#include <stdio.h>

int main() {
    int rows
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            if (j % 2 == 1)
                printf("%d ", j / 2 + 1);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}