#include "pomme.h"

#include <iostream>

Pomme::Pomme()
{
    name="Pomme";
    pepin=true;
}

Pomme::~Pomme()
{
    //dtor
}

std::string Pomme::toString()
{
    return name;
}

bool Pomme::contientPepin()
{
    return false;
}
