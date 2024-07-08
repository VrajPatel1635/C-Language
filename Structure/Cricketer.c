#include<stdio.h>
#include<string.h>

int main() {
    typedef struct cricketer {
        char name[20];
        int age;
        int noOfmatches;
        float avg;
    } cricketer ;

    cricketer arr[3];
    for(int i = 0; i <= 2; i++) {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].noOfmatches);
        scanf("%f", &arr[i].avg);
    }

    for(int i = 0; i <= 2; i++) {
        printf("NAME : %s\n", arr[i].name);
        printf("AGE : %d\n", arr[i].age);
        printf("Number Of Matches : %d\n", arr[i].noOfmatches);
        printf("Average : %f\n\n", arr[i].avg);
    }
    return 0;
}