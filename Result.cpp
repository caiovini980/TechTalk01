#include "Result.h"

Result::Result()
{
	SmallEnemies = 0;
	MediumEnemies = 0;
	BigEnemies = 0;

	SmallKilled = 0;
	MediumKilled = 0;
	BigKilled = 0;
}

Result::~Result()
{
}

void Result::AddEnemyToResult(int size)
{
	if (size == EnemySizes::Big)
	{
		BigEnemies += 1;
	}

	if (size == EnemySizes::Medium)
	{
		MediumEnemies += 1;
	}

	if (size == EnemySizes::Small)
	{
		SmallEnemies += 1;
	}
}

void Result::AddKillToResult(int size)
{
	if (size == EnemySizes::Big)
	{
		BigKilled += 1;
	}

	if (size == EnemySizes::Medium)
	{
		MediumKilled += 1;
	}

	if (size == EnemySizes::Small)
	{
		SmallKilled += 1;
	}
}

void Result::ShowFinalResult(bool playerWon)
{
	if (playerWon)
	{
		std::cout << "Pontius Survived! You Won!\n";
	}
	else
	{
		std::cout << "Pontius Died! You Lost!\n";
	}

	std::cout << "Enemies Slain:\nBig:	" << BigKilled << "/" << BigEnemies << "\n";
	std::cout << "Medium:	" << MediumKilled << "/" << MediumEnemies << "\n";
	std::cout << "Small:	" << SmallKilled << "/" << SmallEnemies << "\n\n";

	system("pause");
}

