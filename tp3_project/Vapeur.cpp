#include "Vapeur.h"
#include "Potatos.h"
#include "HuileOlive.h"
#include "Origan.h"


Vapeur::Vapeur()
{
    name = "Vapeur";
}

Vapeur::~Vapeur()
{
    //dtor
}

std::string Vapeur::getName()
{
    return name;
}

Vegetables* Vapeur::createVegetables()
{
    return new Potatos();
}

Oil* Vapeur::createOils()
{
    return new HuileOlive();
}

Herbs* Vapeur::createHerbes()
{
    return new Origan();
}
