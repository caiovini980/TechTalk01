#pragma once

#include <iostream>
#include <vector>
#include "./Enemy.h"
#include "../Player.h"
#include "../Result.h"
#include "../Combat.h"

std::vector<class Enemy> SetupDungeon(int numberOfEnemies, class Result& result);