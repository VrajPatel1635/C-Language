#include<stdio.h>

// int countOdd(int arr[], int n);
// void reverse(int [], int n);
// void printArr(int arr[], int n);

int main() {
    int n;
    printf("enter n (n>2) : ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstVal = arr[i];
//         int secondVal = arr[n-i-1];
//         arr[i] = secondVal;
//         arr[n-i-1] = firstVal;
//     }
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }