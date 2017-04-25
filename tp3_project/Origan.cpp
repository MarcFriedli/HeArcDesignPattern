#include "Origan.h"

Origan::Origan()
{
    name = "Origan";
}

Origan::~Origan()
{
    //dtor
}

std::string Origan::getHerbs()
{
    return name;
}
