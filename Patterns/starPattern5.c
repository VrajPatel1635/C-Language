/* This c program will print star pattern which is below this line.

        *
       ***
      *****
     *******

*/

// The above pattern is for n = 4 


#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*n; j++) {
            if((n-1-i)<=j && (n-1+i)>=j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}