/* This c program will print star pattern which is below this line.

* * * * * *
*         *
*         *
* * * * * *

*/

//  The above pattern is for n = 5

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of n : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of n : ");
    scanf("%d", &m);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i == 1 || j == 1 || i == n || j == m) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}