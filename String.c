#include<stdio.h>
#include<string.h>  

// void printString(char arr[]);
// int countLenght(char arr[]);
// void salting(char password[]);
// void slice(char str[], int n, int m);
// int countVowels(char str[]);

void checkChar(char str[], char ch);

int main() {
    char str[] = "VrajPatel";
    char ch = 'a';
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch) {
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present!");
            return;
        }
    }
    printf("character is NOT present!");
}

// int countVowels(char str[]) {
//     int count = 0;
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//     }
//     return count;
// }

// void slice(char str[], int n, int m) {
//     char newStr[100];
//     int j = 0;
//     for(int i=n; i<=m; i++, j++) {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// void salting(char password[]) {
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// int countLenght(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i]!='\0'; i++) {
//         count++;
//     }
//     return count-1;
// }

// void printString(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }