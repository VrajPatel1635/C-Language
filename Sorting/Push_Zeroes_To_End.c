#include<stdio.h>

int main() {
    int n;
    printf("enter number of array element : ");
    scanf("%d", &n);
    int arr[n];
    // int ans[9];
    // int idx = 0;

    for(int i = 0; i < n; i++) {
        printf("Enter array's %d element : ", i);
        scanf("%d", &arr[i]);
    }
    // Pushing zeroes in place
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] == 0) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    // for(int i = 0; i < n; i++) {
    //     if(arr[i] != 0) {
    //         ans[idx] = arr[i];
    //         idx++;
    //     }
    // }

    // while(idx != n) {
    //     ans[idx] = 0;
    //     idx++;
    // }

    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}