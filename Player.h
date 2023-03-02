#pragma once
#include "./Headers/Character.h"
#include <iostream>

class Player : public Character
{
public:
	Player(float baseHealth, float baseDamage);
	~Player();

private:
	void SetStats();
	void Died();
};
