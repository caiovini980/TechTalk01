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
    void CreateCharacter();
    virtual void SetStats();

public:
    Character();
    ~Character();

    void TakeDamage(float damage);
    void Attack(const Character& characterToDamage);
};