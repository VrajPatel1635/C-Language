#include<stdio.h>

int main() {
    int arr[8], brr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++) {
        brr[i] = arr[7-i];
    }
    for(int i = 0; i < 8; i++) {
        printf("%d ", brr[i]);
    }
    return 0;
}