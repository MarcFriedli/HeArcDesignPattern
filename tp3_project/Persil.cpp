#include "Persil.h"

Persil::Persil()
{
    name = "Persil";
}

Persil::~Persil()
{
    //dtor
}

std::string Persil::getHerbs()
{
    return name;
}
