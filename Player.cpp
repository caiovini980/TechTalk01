#include "Player.h"

Player::Player(float baseHealth, float baseDamage)
{
	std::cout << "Creating the player...\n\n";
	this->Health = baseHealth;
	this->Damage = baseDamage;

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
