#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;

void change(pokemon* p) {
    // (*x).something = x->something
    p->hp = 100;
    p->attack = 85;
    p->speed = 110;
    p->tier = 'S';
    strcpy(p->name, "Raichu");
    return;
}

int main() {
    pokemon pikachu = {80,75,100,'A',"Pikachu"};
    // pikachu.hp = 80;
    // pikachu.attack = 75;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "PIKACHU");
    
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);

    change(&pikachu);
    
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    return 0;
}