#include "Entity.h"


class Player : public Entity
{
private:
    int exp,lvl;
    String name;

public:
    void setName(String);
    int getExp();
    int getLv();
    void addExp(int);
    void addLv(int);
    void attack(Entity);
};
