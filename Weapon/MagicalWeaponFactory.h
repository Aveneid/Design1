
class MagicalWeaponFactory : public WeaponFactoryInterface
{
  public:
    Weapon* makeWeapon() override { return new MagicalWeapon(); }
};
