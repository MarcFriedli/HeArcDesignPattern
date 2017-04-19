#ifndef POTATOS_H
#define POTATOS_H
#include "Vegetables.h"
#include <iostream>


class Potatos : public Vegetables
{
    public:
        Potatos();
        virtual ~Potatos();
        std::string getVegetable();

    protected:

};

#endif // POTATOS_H
