#ifndef MENU_H
#define MENU_H
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"
#include "AbstractFactory.h"


class Menu
{
    public:
        Menu(AbstractFactory *f);
        virtual ~Menu();

    private:
        Oil *oil;
        Herbs *herbs;
        Vegetables *vegetables;
};

#endif // MENU_H
