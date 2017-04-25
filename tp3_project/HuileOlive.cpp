#include "HuileOlive.h"

HuileOlive::HuileOlive()
{
    name = "Huile d'olive";
}

HuileOlive::~HuileOlive()
{
    //dtor
}

std::string HuileOlive::getOil()
{
    return name;
}
