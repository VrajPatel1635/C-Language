#include <stdio.h>

int reverseNumber(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num);

    printf("Reversed number: %d\n", reversed);

    return 0;
}

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}