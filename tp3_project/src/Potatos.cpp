#include "Potatos.h"

Potatos::Potatos()
{
    name = "Patate";
}

Potatos::~Potatos()
{
    //dtor
}

std::string Potatos::getVegetable()
{
    return name;
}
