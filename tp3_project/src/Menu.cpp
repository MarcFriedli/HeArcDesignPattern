#include "Menu.h"

Menu::Menu(AbstractFactory *f)
{
    oil = f->createOils();
    herbs = f->createHerbes();
    vegetables = f->createVegetables();
}

Menu::~Menu()
{
    //dtor
}
