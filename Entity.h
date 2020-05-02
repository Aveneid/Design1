#include "Weapon.h"

class Entity
{
private:
    int p_hp;
    int p_str,p_def,p_mag;

    Weapon p_currentWeapon;

    bool p_alive = true;

public:
    void takeDamage(int);
    void dealDamage(Entity);
    int getStr();
    int getDef();
    int getMag();
    bool getAliveState();
};
