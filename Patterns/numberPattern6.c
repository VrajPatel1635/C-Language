/* This c program will print number pattern which is below this line.

        0
      1   1       
    2       2     
  3           3   
4 4 4 4 4 4 4 4 4

*/

// The above pattern is for n = 5

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2 * n - 1; j++) { 
            if(i == n - 1 || i + j == n - 1 || j - i == n - 1) {
                printf("%d ", i);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}