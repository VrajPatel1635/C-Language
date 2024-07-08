#include<stdio.h>

int main() {
    int a[7] = {-1,-61,-94,-626,-15,-31,-51};
    int max = a[0];
    for (int i = 0; i < 7; i++)
    {
        if(max<a[i]) {
            max = a[i];
        }
    }
    printf("%d", max);
    return 0;
}