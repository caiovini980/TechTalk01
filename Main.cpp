#include "Headers/Main.h"

int main()
{
    // Initalize the seed for the random variables
    //srand((unsigned)time(NULL));
    srand(10); // use 10 as the 'seed'

    // Variables
    int numberOfEnemies;

    // Welcome text and input
    std::cout << "Welcome to the dungeon crawler for the Tech Talk!\n\n";
    std::cout << "Here you will assume Pontius,\na barbarian that needs to prove to his village that he is worthy to be called a warrior,\neven though nobody saw him in battle yet.\nNow, he decided to enter a dungeon and defeat the enemies that lives inside of it. Good luck.\n\n";
    std::cout << "Choose the amount of enemies that you want to fight against and hope for the best: ";
    std::cin >> numberOfEnemies;

    // Setup the result/scoreboard
    class Result result;

    system("cls");

    // Create the characters
    class Player player(10.0f, 2.0f);

    // Setup the dungeon (position each character on the array)
    std::cout << "\nCreating enemies...\n";
    std::vector<class Enemy> battlefield = SetupDungeon(numberOfEnemies, result);

    system("pause");
    system("cls");

    // Show the dungeon disposition
    std::cout << "Dungeon disposition: ";
    for (int i = 0; i < battlefield.size(); i++)
    {
        if (i == battlefield.size() - 1)
        {
            std::cout << battlefield[i].GetEnemySize();
            continue;
        }

        std::cout << battlefield[i].GetEnemySize() << ", ";
    }

    // Combat
    class Combat combat(player, battlefield, result);
    return 0;
}

std::vector<class Enemy> SetupDungeon(int numberOfEnemies, class Result& result)
{
    std::vector<class Enemy> enemies;

    for (int i = 0; i < numberOfEnemies; i++)
    {
        class Enemy enemy(result);
        enemies.push_back(enemy);
    }

    return enemies;
}