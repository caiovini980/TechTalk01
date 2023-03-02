#include "Player.h"

Player::Player(float baseHealth, float baseDamage) : Character(CharacterTypes::Player)
{
	std::cout << "Creating the player...\n";
	this->Health = baseHealth;
	this->Damage = baseDamage;
	this->MaxHealth = baseHealth;

	std::cout << "Player stats: Health -> " << this->Health << "  Damage -> " << this->Damage << "\n";
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
