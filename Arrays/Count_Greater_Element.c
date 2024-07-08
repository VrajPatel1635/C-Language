#include<stdio.h>

int main() {
    int count = 0, x = 4;
    int arr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++) {
        if(arr[i] > x) {
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}