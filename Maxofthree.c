#include <stdio.h>

int findMaximum(int num1, int num2, int num3) {
    int max = num1; // Assume num1 is the maximum
    
    if (num2 > max) {
        max = num2;
    }
    
    if (num3 > max) {
        max = num3;
    }
    
    return max;
}

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int maximum = findMaximum(a, b, c);
    
    printf("The maximum of the three numbers is: %d\n", maximum);
    
    return 0;
}