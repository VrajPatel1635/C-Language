#include<stdio.h>

int main()
{
    float a,b,d;
    int c;
    printf("Enter the number 1: ");
    scanf("%f", &a);
    printf("Enter the number 2: ");
    scanf("%f", &b);
    printf("Enter the operation :\n1 for addition\n2 for sub\n3 for mul\n4 for divsion:");
    scanf("%d", &c);

    if(c==1){
        d=a+b;
        printf("a + b = %.2f", d);
        if(d>10){
            printf("\nits greater!");
        }
    }
    else if(c==2){
        d=a-b;
        printf("a - b = %.2f",d);
    }
    else if(c==3){
        d=a*b;
        printf("a * b = %.2f",d);
    }
    else if(c==4){
        d=a/b;
        printf("a / b = %.2f",d);
    }
    else{
        printf("Invalid operation!");
    }

    return 0;
}
