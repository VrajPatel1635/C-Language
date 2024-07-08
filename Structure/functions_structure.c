#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

void fun(pokemon p) {
    printf("%d", p.hp);
    return ;
}

void change(pokemon p) {
    p.hp = 70;
    p.attack = 70;
    p.speed = 70;
    return;
}

int main() {

    pokemon pikachu;
    pikachu.hp = 80;
    pikachu.attack = 80;
    pikachu.speed = 80;
    change(pikachu);
    // fun(pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    return 0;
}