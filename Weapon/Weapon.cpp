#include "Weapon.h"

Weapon::Weapon(Type attackType, int baseDmg, int minLv)
{
    p_attackType = attackType;
    p_baseDamage = baseDmg;
    p_minLevel = minLv;
}
Weapon::~Weapon() {}

Weapon::Type Weapon::getAttackType()
{
    return p_attackType;
}
int Weapon::getBaseDamage()
{
    return p_baseDamage;
}
int Weapon::getMinLevel()
{
    return p_minLevel;
}
