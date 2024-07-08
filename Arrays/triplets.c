#include<stdio.h>

int main() {
    int arr[8], x = 12, count = 0;
    for(int i = 0; i < 8; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++) {
        for(int j = i+1; j < 8; j++) {
            for(int k = j+1; k < 8; k++) {
                if(arr[i] + arr[j] + arr[k] == x) {
                    count++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}