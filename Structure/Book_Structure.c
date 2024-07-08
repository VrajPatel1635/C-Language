#include<stdio.h>
#include<string.h>

int main() {
    typedef struct Book {
        char name[50];
        int noOfpages;
        float price;
    } Book ;

    Book a;
    Book b;
    Book c;
    Book d;
    a.noOfpages = 100;
    a.price = 411.5;
    strcpy(a.name,"Secret Seven");
    printf("%d\n", a.noOfpages);
    printf("%.2f\n", a.price);
    printf("%s\n", a.name);
    
    b.noOfpages = 200;
    b.price = 110;
    strcpy(b.name,"Famous Five");
    printf("%d\n", b.noOfpages);
    printf("%.2f\n", b.price);
    printf("%s\n", b.name);
    
    return 0;
}