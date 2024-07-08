#include<stdio.h>

int main() {
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    // for(int i = 0; i < 10; i++) {
    //     printf("%d element is : ", i);
    //     scanf("%d", &arr[i]);
    // }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int sum2 = (n*(n+1))/2;
    printf("%d is missing element\n", sum2 - sum);
    return 0;
}