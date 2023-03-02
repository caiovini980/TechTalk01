#include "../Headers/Character.h"

Character::Character()
{
}

Character::~Character()
{
}

// Virtual Methods
void Character::Died() {}
void Character::SetStats() {}

// Character Methods
void Character::CreateCharacter()
{

}

void Character::TakeDamage(float damage)
{
    Health -= damage;
    if (Health <= 0)
    {
        this->Died();
    }
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
