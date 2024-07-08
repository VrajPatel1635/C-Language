#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("enter number of array element : ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter array's %d element : ", i);
        scanf("%d", &arr[i]);
    }
    // Array in ascending order
    for(int i = 0; i < n - 1; i++) {
        bool flag = true; // array is sorted yet
        for(int j = 0; j <= n - 2 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    
    //Array in descending order
    // for(int i = 0; i < n - 1; i++) {
    //     bool flag = true; // array is sorted yet
    //     for(int j = 0; j <= n - 2 - i; j++) {
    //         if(arr[j] < arr[j+1]) {
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //             flag = false;
    //         }
    //     }
    //     if(flag == true) break;
    // }
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}