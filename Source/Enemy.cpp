#include "../Headers/Enemy.h"
#include <iostream>

Enemy::Enemy() : Character(CharacterTypes::Enemy)
{
    SetEnemySize();
    SetStats();

    std::cout << "Creating a new enemy of Health of: " << Health << " and Damage of " << Damage << ".\n\n";
    type = CharacterTypes::Enemy;

    // Add to the final score
}

Enemy::~Enemy()
{
}

EnemySizes Enemy::GetEnemySize()
{
    return size;
}

void Enemy::SetEnemySize()
{                                           
    int random = GetRandom<int>(1, 3);        // random number between 1 and 3
    this->size = EnemySizes(random);
}

void Enemy::SetStats()
{
    if (size == 0) { return; }          // None

    if (size == 1)                      // Big
    {
        Health = GetRandom<int>(7, 4);
        Damage = GetRandom<int>(3, 2);
    }

    else if(size == 2)                  // Medium
    {
        Health = GetRandom<int>(5, 3);
        Damage = GetRandom<int>(2, 2);
    }

    else                                // Small
    {
        Health = GetRandom<int>(2, 3);
        Damage = GetRandom<int>(1, 2);
    }

    MaxHealth = Health;
}

void Enemy::Died()
{
    std::cout << "You killed a enemy of size " << size << "\n";
    // add to the final score
}
