/* This c program will print star pattern which is below this line.
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/


#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i+j) >= (n-1)) {
                printf("* ");
            }else {
                printf("  ");
            }        
        }
        printf("\n");
    }


    // for(int i = 1; i <= n; i++) {
    //     for(int j = n; j >= i; j--) {
    //         printf("  ");        
    //     }
    //     for(int k = 1; k <= i; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    return 0;
}