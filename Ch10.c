#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;


// write Odd Numbers
    // fptr = fopen("Odd.txt", "w");

    // int n;
    // printf("enter n : ");
    // scanf("%d", &n);

    // for(int i=0; i<=n; i++) {
    //     if(i % 2 != 0) {
    //         fprintf(fptr, "%d\n", i);
    //     }
    // }
    // fclose(fptr);

    // return 0;

// Student Information
    // fptr = fopen("Vraj.txt", "w");
    // char name[100];
    // int age;
    // float cgpa;

    // printf("enter name : ");
    // scanf("%s", name);
    // printf("enter age : ");
    // scanf("%d", &age);
    // printf("enter cgpa : ");
    // scanf("%f", &cgpa);

    // fprintf(fptr, "student name : %s\n", name);
    // fprintf(fptr, "student age : %d\n", age);
    // fprintf(fptr, "student cgpa : %f\n", cgpa);
    // fclose(fptr);

    // return 0;


// Print numbers
    // int n;
    // fscanf(fptr, "%d", &n);
    // printf("number = %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("number = %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("number = %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("number = %d\n", n);
    // fscanf(fptr, "%d", &n);
    // printf("number = %d\n", n);
    // fclose(fptr);

    // return 0;

// Read full file
    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF) {
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");
    // fclose(fptr);

    // return 0;

// Change Text
    // fputc('M', fptr);
    // fputc('A', fptr);
    // fputc('N', fptr);
    // fputc('G', fptr);
    // fputc('O', fptr);

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // fclose(fptr);

    // return 0;
    
    fclose(fptr);

    return 0;
}
