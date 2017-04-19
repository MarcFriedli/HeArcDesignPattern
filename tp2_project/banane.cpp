#include "banane.h"
#include "fruit.h"

Banane::Banane()
{
    name="Banane";
    pepin=false;
}

Banane::~Banane()
{

}

std::string Banane::toString()
{
    return name;
}

bool Banane::contientPepin()
{
    return false;
}
