#include<stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] == arr[4-i]) {
            printf("%d and %d is palindrome\n", arr[i], arr[4-i]);
        } else {
            printf("%d and %d is not palindrome\n", arr[i], arr[4-i]);
        }
    }
    return 0;
}