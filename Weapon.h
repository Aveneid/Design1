class Weapon
{
public:

    enum  Type
    {
        Normal=0,
        Magical
    };

    int getBaseDamage();
    int getMinLevel();

    Type getAttackType();

    Weapon(Type,int,int);
    ~Weapon();




private:
    int p_baseDamage;
    int p_minLevel;

    Type p_attackType;


};
