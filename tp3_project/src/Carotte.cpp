#include "Carotte.h"

Carotte::Carotte()
{
    name = "Carotte";
}

Carotte::~Carotte()
{
    //dtor
}

std::string Carotte::getVegetable()
{
    return name;
}
