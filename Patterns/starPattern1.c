/* This c program will print star pattern which is below this line.
* * * * *
* * * * *
* * * * *
* * * * *
*/


#include <stdio.h>

int main() {
    int rows = 4;
    int columns = 5;
    int i, j;

    for (i = 0; i < rows; i++) {  // Outer loop for rows
        for (j = 0; j < columns; j++) {  // Inner loop for columns
            printf("* ");
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}