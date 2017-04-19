#include "HuilaSoja.h"

HuilaSoja::HuilaSoja()
{
    name = "Soja";
}

HuilaSoja::~HuilaSoja()
{
    //dtor
}

std::string HuilaSoja::getOil()
{
    return name;
}
