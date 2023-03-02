#pragma once

#include <iostream>
#include <vector>
#include "./Enemy.h"
#include "../Player.h"

std::vector<class Enemy> SetupDungeon(int numberOfEnemies);
void CreateCharacter();
void CreatePlayerCharacter();
void CreateEnemies();