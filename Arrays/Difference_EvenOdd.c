#include<stdio.h>

int main() {
    int arr[6];
    for(int i = 0; i < 6; i++) {
        printf("%d element is : ", i);
        scanf("%d", &arr[i]);
    }
    int sumEven = 0, sumOdd = 0;
    for(int i = 0; i < 6; i++) {
        if(i%2 == 0) {
            sumEven = sumEven + arr[i];
        } else {
            sumOdd = sumOdd + arr[i];
        }
    }
    printf("%d - %d = %d", sumEven, sumOdd, sumEven - sumOdd);
    return 0;
}