#include<stdio.h>

int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 8; j++) {
            if(arr[i] == arr[j]) {
                printf("%d is the duplicate element.", arr[i]);
                break;
            }
        }
    }
    return 0;
}