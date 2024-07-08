#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    printf("enter number of array element : ");
    scanf("%d", &n);
    int arr[n];
    int k = 3; // Find 3rd smallest element

    for(int i = 0; i < n; i++) {
        printf("Enter array's %d element : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minidx = -1;
        for(int j = i; j <= k - 1; j++) {
            if(min > arr[j]) {
                min = arr[j];
                minidx = j;
            }
        }   
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("%d", arr[k-1]);


    return 0;
}