#pragma once
#include <cstdlib>
#include "Character.h"
#include "../Result.h"
#include "../Utils.h"

enum EnemySizes
{
    None = 0,
    Small,
    Medium,
    Big
};

class Enemy : public Character
{
private:
    EnemySizes size;

    void SetEnemySize();
    void SetStats();
    void Died();

public:
    Enemy(class Result& result);
    ~Enemy();

    EnemySizes GetEnemySize();
};
