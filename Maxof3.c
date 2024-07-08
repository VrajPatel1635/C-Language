#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is the greatest\n");
        }
        else
        {
            printf("c is the greatest\n");
        }
    }
    else if (b > c)
    {
        printf("b is the greatest\n");
    }
    else
    {
        printf("c is the greatest\n");
    }

    return 0;
}