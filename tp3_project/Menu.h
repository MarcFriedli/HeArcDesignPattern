#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"
#include "AbstractFactory.h"


class Menu
{
public:
    Menu(AbstractFactory *f);
    virtual ~Menu();
    void showMenu();

private:
    Oil *oil;
    Herbs *herbs;
    Vegetables *vegetables;
    std::string name;
};

#endif // MENU_H
