#include "WeaponType.h"

class Weapon
{
private:
    int p_baseDamage;
    int p_minLevel;
    WeaponType p_attackType;

    int p_classRequired;

    Weapon(WeaponType,int,int,int);
    ~Weapon();

public:
    int getBaseDamage();
    int getMinLevel();
    WeaponType getAttackType();
    int getClassRequired();
    int getWeaponType();

};
