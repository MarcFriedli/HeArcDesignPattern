#include "Potage.h"
#include "Carotte.h"
#include  "HuileOlive.h"
#include "Origan.h"

Potage::Potage()
{
    name="Potage";
}

Potage::~Potage()
{
    //dtor
}

std::string Potage::getName()
{
    return name;
}

Vegetables* Potage::createVegetables()
{
    return new Carotte();
}

Oil* Potage::createOils()
{
    return new HuileOlive();
}

Herbs* Potage::createHerbes()
{
    return new Origan();
}
