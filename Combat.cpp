# include "Combat.h"

Combat::Combat(class Player& player, std::vector<class Enemy> battlefield)
{
	CurrentTurn = Turn::NoneTurn;

	for (int index = 0; index < battlefield.size(); index++)
	{
		ExecuteCombat(player, battlefield[index]);

		if (player.GetHealth() < 0)
		{
			std::cout << "Player died!\nFinishing game...\n";
			break;
		}

		system("cls");
		player.HealCharacter(GetRandom<int>(1, 3));
		std::cout << "\nHealing player for the next battle...\n";
		std::cout << "Getting next enemy...\n";
		system("pause");
	}
}

Combat::~Combat()
{
}

void Combat::ExecuteCombat(class Player& player, class Enemy& enemy)
{
	while (player.GetHealth() > 0 && enemy.GetHealth() > 0)
	{
		system("cls");
		std::cout << "Player health: " << player.GetHealth() << "\nCurrent enemy Health: " << enemy.GetHealth() << "\n\n";

		CurrentTurn = SwitchTurn();

		if (CurrentTurn == Turn::PlayerTurn)
		{
			if (!TryToHit(enemy)) { continue; }

			player.Attack(enemy);
			system("pause");
			continue;
		}

		if (!TryToHit(player)) { continue; }

		enemy.Attack(player);
		system("pause");
	}
}

bool Combat::TryToHit(class Character& classToHit)
{
	int random = GetRandom<int>(1, 20);

	if (classToHit.GetType() == CharacterTypes::Enemy) // attacking the enemy
	{
		if (random > 15)
		{
			std::cout << "HITTING PLAYER!\n";
			return true;
		}
	}
	else // attacking a enemy
	{
		if (random > 10)
		{
			std::cout << "HITTING ENEMY!\n";
			return true;
		}
	}

	std::cout << "MISSED!\n";
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
		std::cout << "Player attacking!\n";
		return Turn::PlayerTurn;
	}
}
