#include "Salade.h"
#include "Carotte.h"
#include "HuilaSoja.h"
#include "Persil.h"

Salade::Salade()
{
    name = "Salade";
}

Salade::~Salade()
{
    //dtor
}

std::string Salade::getName()
{
    return name;
}

Vegetables* Salade::createVegetables()
{
    return new Carotte();
}

Oil* Salade::createOils()
{
    return new HuilaSoja();
}

Herbs* Salade::createHerbes()
{
    return new Persil();
}