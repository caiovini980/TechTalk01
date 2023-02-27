#include "../Headers/Character.h"

Character::Character()
{
}

Character::~Character()
{
}

void Character::CreateCharacter()
{

}

void Character::TakeDamage(float damage)
{
    Health -= damage;
}

void Character::Attack(const Character &characterToDamage)
{
    characterToDamage:TakeDamage(Damage);
}
