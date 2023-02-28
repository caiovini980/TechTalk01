#include "Headers/Main.h"

int main()
{
    // Initalize the seed for the random variables
    //srand((unsigned)time(NULL));
    srand(10); // use 10 as the 'seed'

    // Variables
    int numberOfEnemies;

    // Welcome text and input
    std::cout << "Welcome to the dungeon crawler for the Tech Talk!\n";
    std::cout << "Here you will choose the amount of enemies that you want to fight against and hope for the best.\n";
    std::cout << "Whats's the amount of enemies that you wanna fight? ";
    std::cin >> numberOfEnemies;

    // Create the characters
    // Setup the dungeon (position each character on the array)
    std::vector<class Enemy> enemies;

    for (int i = 0; i < numberOfEnemies; i++)
    {
        class Enemy enemy;
        enemies.push_back(enemy);
    }

    // Combat
    // Result

    system("pause");
    return 0;
}

void SetupBattle()
{

}