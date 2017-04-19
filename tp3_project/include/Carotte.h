#ifndef CAROTTE_H
#define CAROTTE_H
#include "Vegetables.h"
#include <iostream>


class Carotte : public Vegetables
{
    public:
        Carotte();
        virtual ~Carotte();
        std::string getVegetable();

    protected:
};

#endif // CAROTTE_H
