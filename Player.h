#pragma once
#include "./Headers/Character.h"
#include <iostream>

class Player : private Character
{
public:
	Player(float baseHealth, float baseDamage);
	~Player();

private:
	CharacterTypes type;

	void SetStats();
	void Died();
};
