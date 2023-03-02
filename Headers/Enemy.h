#pragma once
#include <cstdlib>
#include "Character.h"
#include "../Utils.h"

enum EnemySizes
{
    None = 0,
    Small,
    Medium,
    Big
};

class Enemy : private Character
{
private:
    EnemySizes size;
    CharacterTypes type;

    void SetEnemySize();
    void SetStats();
    void Died();

public:
    Enemy();
    ~Enemy();
};
