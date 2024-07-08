#include<stdio.h>

int main() {
    int n;
    printf("enter number of array element : ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter array's %d element : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= n - 1; i++) {
        int j = i;
        while(j >= 1 && arr[j] < arr[j - 1]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}