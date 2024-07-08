/* This c program will print number pattern which is below this line.

0000000 
 111111
  22222
   3333
    444
     55
      6
      
*/

// The above pattern is for n = 7

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j >= i) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}