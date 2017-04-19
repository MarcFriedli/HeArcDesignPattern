#include "fraise.h"
#include <iostream>

Fraise::Fraise()
{
    name="Fraise";
    pepin=false;
}

Fraise::~Fraise()
{
    //dtor
}

std::string Fraise::toString()
{
    return name;
}

bool Fraise::contientPepin()
{
    return false;
}
