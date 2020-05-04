class Weapon
{
public:

    enum  WeaponType
    {
        Normal=0,
        Magical
    };

    int getBaseDamage();
    int getMinLevel();

    WeaponType getAttackType();

    Weapon(WeaponType,int,int);
    ~Weapon();




private:
    int p_baseDamage;
    int p_minLevel;

    WeaponType p_attackType;


};
