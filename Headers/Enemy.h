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
    void SetEnemySize();
    void SetStats();

public:
    Enemy();
    ~Enemy();
};
