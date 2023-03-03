#include "Player.h"

Player::Player(float baseHealth, float baseDamage) : Character(CharacterTypes::Player)
{
	std::cout << "Getting Pontius ready...\n";
	this->Health = baseHealth;
	this->Damage = baseDamage;
	this->MaxHealth = baseHealth;

	std::cout << "Pontius stats: Health -> " << this->Health << "  Damage -> " << this->Damage << "\n";
}

Player::~Player()
{
}

void Player::SetStats()
{
}
