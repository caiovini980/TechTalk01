#pragma once

enum CharacterTypes
{
    Player = 0,
    Enemy
};

class Character
{
private:

protected:
    float Health;
    float MaxHealth;
    float Damage;

    CharacterTypes type;

    virtual void SetStats() = 0;

public:
    Character(CharacterTypes defaultType);
    ~Character();

    float GetHealth();
    CharacterTypes GetType();
    void HealCharacter(float healthToAdd);
    void TakeDamage(float damage);
    void Attack(Character& characterToDamage);
};