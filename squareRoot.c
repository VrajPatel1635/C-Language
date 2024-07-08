#include<stdio.h>
#include<math.h>

float squareRoot(float number);

int main() {
    float number;
    printf("Enter number : ");
    scanf("%f", &number);

    float root = squareRoot(number);
    printf("Square Root : %.4f", root);
}

float squareRoot(float number) {
    if(number < 0) {
        printf("Square root of Negative number is not available");
    } else {
        return sqrt(number);
    }
}