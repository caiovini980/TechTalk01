# include "Combat.h"

Combat::Combat(class Player& player, std::vector<class Enemy> battlefield, class Result& result)
{
	CurrentTurn = Turn::NoneTurn;

	std::cout << "\n* ENTER THE DUNGEON!! * - Villagers are shouting...\nPontius take a deep breath and enters it\n";

	for (int index = 0; index < battlefield.size(); index++)
	{
		ExecuteCombat(player, battlefield[index]);

		if (player.GetHealth() < 0)
		{
			system("cls");
			result.ShowFinalResult(false);
			return;
		}

		system("cls");
		result.AddKillToResult(battlefield[index].GetEnemySize());
		player.HealCharacter(GetRandom<int>(1, 3));
		std::cout << "\nHealing Pontius for the next battle...\n";
		std::cout << "Getting next enemy...\n";
	}

	system("cls");
	result.ShowFinalResult(true);
}

Combat::~Combat()
{
}

void Combat::ExecuteCombat(class Player& player, class Enemy& enemy)
{
	while (player.GetHealth() > 0 && enemy.GetHealth() > 0)
	{
		system("pause");
		system("cls");
		std::cout << "Pontius' health: " << player.GetHealth() << "\nCurrent enemy Health: " << enemy.GetHealth() << "\n\n";

		CurrentTurn = SwitchTurn();

		if (CurrentTurn == Turn::PlayerTurn)
		{
			if (!TryToHit(enemy)) { continue; }
			player.Attack(enemy);
			continue;
		}

		if (!TryToHit(player)) { continue; }
		enemy.Attack(player);
	}
}

bool Combat::TryToHit(class Character& classToHit)
{
	int random = GetRandom<int>(1, 20);

	if (classToHit.GetType() == CharacterTypes::Enemy) // attacking a enemy
	{
		if (random > 10)
		{
			std::cout << "HITTING ENEMY!\n\n";
			return true;
		}
	}
	else // attacking the player
	{
		if (random > 15)
		{
			std::cout << "HITTING PONTIUS!\n\n";
			return true;
		}
	}

	std::cout << "MISSED!\n\n";
	return false;
}

Turn Combat::SwitchTurn()
{
	if (CurrentTurn == 0) // None
	{
		std::cout << "Getting the first attack...\n";
		int randomTurn = GetRandom<int>(1, 2);
		CurrentTurn = Turn(randomTurn);
	}

	if (CurrentTurn == 1) // Player attacked, enemy attacking
	{
		std::cout << "Enemy attacking!\n";
		return Turn::EnemyTurn;
	}
	else // Enemy attacking
	{
		std::cout << "Pontius attacking!\n";
		return Turn::PlayerTurn;
	}
}
