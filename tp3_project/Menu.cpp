#include "Menu.h"

Menu::Menu(AbstractFactory *f)
{
    oil = f->createOils();
    herbs = f->createHerbes();
    vegetables = f->createVegetables();
    name = f->getName();
}

Menu::~Menu()
{
    //dtor
}

void Menu::showMenu()
{
    std::cout<<"Menu "<<name<<" avec "<<vegetables->getVegetable()<<", "<<herbs->getHerbs()<<" et "<<oil->getOil()<<std::endl;
}
