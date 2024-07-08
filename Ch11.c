#include<stdio.h>
#include<stdlib.h>

int main() {

// 5 odd to 6 even
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for(int i=0; i<6; i++) {
        printf("%d\n", ptr[i]);
    }

// Realloc Use
    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));
    
    // printf("enter numbers(5) : ");
    // for(int i=0; i<5; i++) {
    //     scanf("%d", &ptr[i]);
    // }
    
    // ptr = realloc(ptr, 8);
    // printf("enter numbers(8) : ");
    // for(int i=0; i<8; i++) {
    //     scanf("%d", &ptr[i]);
    // }

    // //print
    // for(int i=0; i<8; i++) {
    //     printf("number %d is %d\n", i, ptr[i]);
    // }


// Take user input & use of free
    // int *ptr;
    // int n;
    // printf("enter n : ");
    // scanf("%d", &n);

    // ptr = (int *) calloc(n, sizeof(int));

    // for(int i=0; i<n; i++) {
    //     printf("%d\n", ptr[i]);
    // }

    // free(ptr);

    // ptr = (int *) calloc(2, sizeof(int));
    // for(int i=0; i<2; i++) {
    //     printf("%d\n", ptr[i]);
    // }


// 5 Float Value
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));

//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 6;
//     ptr[4] = 7;

//     for(int i=0; i<5; i++) {
//         printf("%f\n", ptr[i]);
//     }

    return 0;
}