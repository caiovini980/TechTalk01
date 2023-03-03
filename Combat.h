#pragma once
#include "Player.h"
#include "Result.h"
#include "Headers/Enemy.h"
#include <vector>
#include "./Utils.h"

enum Turn
{
	NoneTurn = 0,
	PlayerTurn,
	EnemyTurn
};

class Combat
{
public:
	Combat(class Player& player, std::vector<class Enemy> battlefield, class Result& result);
	~Combat();

private:
	Turn CurrentTurn;

	void ExecuteCombat(class Player& player, class Enemy& enemy);
	bool TryToHit(class Character &classToHit);
	Turn SwitchTurn();
};
