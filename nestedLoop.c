#include<stdio.h>

int main() {
    int row = 4, colums = 5, i, j;
    
    for(int i=0; i < row; i++) {
        for(int j=0; j<colums; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}