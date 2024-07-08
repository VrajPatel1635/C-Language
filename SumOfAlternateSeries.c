#include <stdio.h>

int main() {
    int N, sum = 0, sign = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += sign * i;
        sign *= -1;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
