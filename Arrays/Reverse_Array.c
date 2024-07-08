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
    reverse(arr, 1, 4);
    // index 1-4 reverse
    // for(int i = 1, j = 4; i <= j; i++, j--) {
    //     int a = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = a;
    // }
    for(int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}