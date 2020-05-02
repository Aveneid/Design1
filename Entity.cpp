#include "Entity.h"

void Entity::dealDamage(Entity enemy)
{
    int damage = 0;
    if(p_currentWeapon.getAttackType() == WeaponType.Magical)
        damage = p_currentWeapon.getBaseDamage() * getMag() / (getMag() / enemy.getDef());
    else
        damage = p_currentWeapon.getBaseDamage() * getStr() / (getStr() / enemy.getDef());

    enemy.takeDamage(damage);
}

void Entity::takeDamage(int amount)
{
    p_hp -= amount;
    if(p_hp<=0)
        p_alive = false;
}

int Entity::getDef()
{
    return p_def;
}
int Entity::getStr()
{
    return p_str;
}
int Entity::getMag()
{
    return p_mag;
}

bool Entity::getAliveState()
{
    return p_alive;
}

