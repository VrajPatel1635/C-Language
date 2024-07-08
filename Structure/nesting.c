#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main() {
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendrypokemon {
        pokemon normal;
        char ability[100];
    } legendrypokemon ;

    typedef struct godpokemon{
        legendrypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turns anyone to stone");
    arceus.legend.normal.hp = 200;
    arceus.legend.normal.attack = 250;
    arceus.legend.normal.speed = 180;
    arceus.legend.normal.tier = 'G';
    strcpy(arceus.legend.normal.name, "Arceus");







    legendrypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.attack = 180;
    mewtwo.normal.hp = 150;
    strcpy(mewtwo.normal.name, "Mewtwo");
    mewtwo.normal.speed = 180;
    mewtwo.normal.tier = 'S';

    return 0;
}