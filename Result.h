#pragma once
#include "Headers/Enemy.h"
#include <iostream>

class Result
{
public:
	Result();
	~Result();

	void AddEnemyToResult(int size);
	void AddKillToResult(int size);
	void ShowFinalResult(bool playerWon);

private:

	// total of enemies
	int SmallEnemies;
	int MediumEnemies;
	int BigEnemies;

	// enemies killed
	int SmallKilled;
	int MediumKilled;
	int BigKilled;
};