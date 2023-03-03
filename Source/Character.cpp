#include "../Headers/Character.h"

Character::Character(CharacterTypes defaultType)
{
    type = defaultType;
}

Character::~Character()
{
}

void Character::SetStats() {}

void Character::TakeDamage(float damage)
{
    Health -= damage;
}

void Character::Attack(Character& characterToDamage)
{
    characterToDamage.TakeDamage(Damage);
}

float Character::GetHealth()
{
    return this->Health;
}

CharacterTypes Character::GetType()
{
    return this->type;
}

void Character::HealCharacter(float healthToAdd)
{
    this->Health += healthToAdd;

    if (Health >= MaxHealth)
    {
        Health = MaxHealth;
    }
}
