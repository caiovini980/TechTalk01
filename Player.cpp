#include "Player.h"

Player::Player(float baseHealth, float baseDamage)
{
	std::cout << "Creating the player...\n";
	this->Health = baseHealth;
	this->Damage = baseDamage;

	std::cout << "Player stats: Health -> " << this->Health << "  Damage -> " << this->Damage << "\n";

	type = CharacterTypes::Player;
}

Player::~Player()
{
}

void Player::SetStats()
{
}

void Player::Died()
{
}
