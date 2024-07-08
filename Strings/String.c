#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Dharitri is Chudail";
    scanf("%[^\n]s", str);
    printf("%s", str);
    puts("Hello Guys!");    
    return 0;
}