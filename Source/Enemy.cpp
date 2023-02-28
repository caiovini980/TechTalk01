#include "../Headers/Enemy.h"
#include <iostream>

Enemy::Enemy()
{
    CreateCharacter();
    SetEnemySize();
    SetStats();
}

Enemy::~Enemy()
{
}

void Enemy::SetEnemySize()
{                                           
    int random = GetRandom<int>(1, 3);        // random number between 1 and 3
    std::cout << "Got random value: " << random << ".\n";
    this->size = EnemySizes(random);

    std::cout << "Creating a new enemy of size: " << size << ".\n";
}

void Enemy::SetStats()
{
    if (size == 0) { return; }          // None

    if (size == 1)                      // Big
    {
        Health = 10;
        Damage = 2;
    }

    else if(size == 2)                  // Medium
    {
        Health = 6;
        Damage = 2;
    }

    else                                // Small
    {
        Health = 4;
        Damage = 1;
    }
}