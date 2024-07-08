#include<stdio.h>
void reverse(int arr[], int x, int y) {
    for(int i = x, j = y; i < j; i++, j--){
        int a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
        
    }
    return;
}
int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    int k = 20, n = 8;
    k = k % n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    
    for(int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
