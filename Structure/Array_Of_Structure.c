#include<stdio.h>
#include<string.h>

int main() {
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 80;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Charizard");

    arr[1].attack = 60;
    arr[1].hp = 120;
    arr[1].speed = 90;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "Dragon");
    
    arr[2].attack = 80;
    arr[2].hp = 65;
    arr[2].speed = 100;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "Goldduck");

    for(int i = 0; i <= 2; i++) {
        printf("%s\n", arr[i].name);
        printf("Attack : %d\n", arr[i].attack);
        printf("HP : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n", arr[i].tier);
    }

    return 0;
}