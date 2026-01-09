#include <stdio.h>
#include <stdbool.h>

    typedef enum
    {
        SMALL,
        BIG,
        BOSS
    } EnemyType;

    typedef struct
    {
        int x;
        int y;
        int hp;
        EnemyType type;
    } Enemy;

void add_damage(Enemy *, int);
void change_position(Enemy *, int, int);

int main()
{

    
    return 0;
}

void EnemyMovement(bool movementActive)
{
    if(!movementActive) return;

    for (int i = 0; i < 20; i++)
    {
        
    }
    
}

void change_position(Enemy *enemy, int x, int y)
{
    enemy->x += x;
    enemy->y += y;
}

void add_damage(Enemy *enemy, int damage)
{
    //The same thing
    enemy->hp;
    (*enemy).hp;
}