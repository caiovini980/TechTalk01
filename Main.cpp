#include "Headers/Main.h"

int main()
{
    // Initalize the seed for the random variables
    //srand((unsigned)time(NULL));
    srand(11); // use 10 as the 'seed'

    // Variables
    int numberOfEnemies;

    // Welcome text and input
    std::cout << "Welcome to the dungeon crawler for the Tech Talk!\n";
    std::cout << "Here you will choose the amount of enemies that you want to fight against and hope for the best.\n";
    std::cout << "Whats's the amount of enemies that you wanna fight? ";
    std::cin >> numberOfEnemies;

    // Create the characters
    class Player player(10.0f, 2.0f);

    // Setup the dungeon (position each character on the array)
    std::vector<class Enemy> battlefield = SetupDungeon(numberOfEnemies);

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

    std::cout << "\nPress Enter to start the dungeon.\n";
    system("pause");

    // Combat
    class Combat combat(player, battlefield);

    // Result

    system("pause");
    return 0;
}

std::vector<class Enemy> SetupDungeon(int numberOfEnemies)
{
    std::vector<class Enemy> enemies;

    for (int i = 0; i < numberOfEnemies; i++)
    {
        class Enemy enemy;
        enemies.push_back(enemy);
    }

    return enemies;
}