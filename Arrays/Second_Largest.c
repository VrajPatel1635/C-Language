#include<stdio.h>

int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int smax = arr[0];
    // for(int i = 0; i < 8; i++) {
    //     if(max < arr[i]) {
    //         max = arr[i];
    //     }
    // }
    // for(int i = 0; i < 8; i++) {
    //     if(smax < arr[i] && arr[i] != max) {
    //         smax = arr[i];
    //     }
    // }

    for(int i = 0; i < 8; i++) {
        if(max < arr[i]) {
            smax = max;
            max = arr[i];
        }
        
    }
    printf("%d", smax);
    return 0;
}