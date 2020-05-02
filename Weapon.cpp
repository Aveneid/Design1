#include "Weapon.h"

Weapon::Weapon(WeaponType attackType, int baseDmg, int classReq, int minLv)
{
    p_attackType = attackType;
    p_baseDamage = baseDmg;
    p_classRequired = classReq;
    p_minLevel = minLv;
}
Weapon::~Weapon() {}

WeaponType Weapon::getAttackType()
{
    return p_attackType;
}
int Weapon::getBaseDamage()
{
    return p_baseDamage;
}
int Weapon::getClassRequired()
{
    return p_classRequired;
}

int Weapon::getMinLevel()
{
    return p_minLevel;
}
