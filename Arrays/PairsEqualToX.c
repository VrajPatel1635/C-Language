#include<stdio.h>

int main() {
    int arr[8], x = 12, count = 0;
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++) {
        for(int j = i; j < 8; j++) {
            if(arr[i] + arr[j] == x) {
                if(arr[i] != arr[j]) {
                    count++;
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}