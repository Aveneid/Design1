

class NormalWeaponFactory : public WeaponFactoryInterface
{
  public:
    Weapon* makeWeapon() override { return new NormalWeapon(); }
};
