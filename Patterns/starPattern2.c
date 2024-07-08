/* This c program will print star pattern which is below this line.
*
* * 
* * *
* * * * 
* * * * *
*/



#include<stdio.h>

int main() {
    int i, j;

    for(int i=0; i<6; i++) {
        for(int j=0; j<i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}