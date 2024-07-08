//        *         *
//      * * *     * * *
//    * * * * * * * * * *
//      * * * * * * * *
//        * * * * * *
//          * * * *
//            * *
//             *
#include<stdio.h>
int main()
{
    for(int i=1;i<=8;i++)
    {
        if( i < 4)
        {
            for(int j=1;j<=4-i;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=2*i-1;k++)
            {
                printf(" *");
            }      
            for(int j=1;j<=6-2*i;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=2*i-1;k++)
            {   
                printf(" *");
            }
        printf("\n");
        }
        else if (3 < i < 9)
        {
            for(int j=1;j<=i-2;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=(8-i)*2;k++)
            {
                printf(" *");
            }
            if(i==8) printf("*");
            printf("\n");
        }   
   }
    return 0;
}