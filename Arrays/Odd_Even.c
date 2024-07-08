#include<stdio.h>

int main() {
    int arr[7];
    for(int i = 0; i < 7; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 7; i++) {
        if(i%2 != 0) {
            arr[i] = arr[i] * 2;
        } else {
            arr[i] = arr[i] + 10;
        }
    }
    for(int i = 0; i < 7; i++) {
        printf("New %d element is : %d\n", i, arr[i]);
    }
    return 0;
}