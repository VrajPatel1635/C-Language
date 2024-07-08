#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    typedef struct date {
        int day;
        int month;
        int year;

    } date;

    date a, b;
    // a -> 15/1/1965

    a.day = 15;
    a.month = 1;
    a.year = 1965;

    // b -> 26/8/2022

    b.day = 26;
    b.month = 8;
    b.year = 2022; 

    bool flag = true;

    // if(a.day != b.day) flag = false;
    // if(a.month != b.month) flag = false;
    // if(a.year != b.year) flag = false;
    
    // if(flag == true) printf("The dates are equal");
    // else printf("The dates are not equal");

    date c;
    c = a;
    if(a.day != c.day) flag = false;
    if(a.month != c.month) flag = false;
    if(a.year != c.year) flag = false;
    
    if(flag == true) printf("The dates are equal");
    else printf("The dates are not equal");

    return 0;
}