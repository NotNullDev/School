#include <stdio.h>
#include <string.h>

#undef print

void hit(int *playerHp, int damage);

struct Player createPlayer(char name[]);

void print(char *name);

struct Player
{
    char *name;
    int hp;
    int mana;
};

static struct Player *players[10];

int main(int argc, char *argv[])
{
    int a;
    scanf("%d", &a);
    printf("%d", a);

    return 0;
}

void print(char *name)
{
    printf("%s", name);
}

struct Player createPlayer(char name[])
{
    struct Player p = {name, 100, 100};
    return p;
}

void hit(int *playerHp, int damage)
{
    *playerHp -= damage;
}
