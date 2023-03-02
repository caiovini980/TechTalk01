#pragma once

enum CharacterTypes
{
    Player,
    Enemy
};

class Character
{
private:

protected:
    float Health;
    float Damage;

    CharacterTypes type;

    void CreateCharacter();

    virtual void Died() = 0;
    virtual void SetStats() = 0;

public:
    Character();
    ~Character();

    float GetHealth();
    CharacterTypes GetType();
    void TakeDamage(float damage);
    void Attack(Character& characterToDamage);
};