#include "Cuisson.h"
#include "HuilaSoja.h"
#include "Potatos.h"
#include "Persil.h"

Cuisson::Cuisson()
{
    name = "Cuisson";
}

Cuisson::~Cuisson()
{
    //dtor
}

std::string Cuisson::getName()
{
    return name;
}

Vegetables* Cuisson::createVegetables()
{
    return new Potatos();
}

Oil* Cuisson::createOils()
{
    return new HuilaSoja();
}

Herbs* Cuisson::createHerbes()
{
    return new Persil();
}
