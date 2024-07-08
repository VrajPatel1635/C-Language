#include<stdio.h>

float tempCelc(float temperature);

int main() {
    float temperature;
    printf("enter temperature : ");
    scanf("%f", &temperature);

    float celc = tempCelc(temperature);
    return 0;
}

float tempCelc(float temperature) {
    if(temperature <= 15.0) {
        printf("atmosphere is Cold");
    } else {
        printf("atmosphere is Hot");
    }
}
