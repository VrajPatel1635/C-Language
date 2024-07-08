/* for single or double steps*/

#include<stdio.h>

int stair(int n) {
    if(n==1 || n==2) return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d", ways);
    return 0;
}

/*for single, double or triple steps

#include<stdio.h>

int stair(int n) {
    if(n==1 || n==2) return n;
    if(n==3) return 4;
    int totalWays = stair(n-1) + stair(n-2) + stair(n-3);
    return totalWays;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d", ways);
    return 0;
}
*/