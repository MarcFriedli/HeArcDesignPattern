#ifndef CUISSON_H
#define CUISSON_H
#include "AbstractFactory.h"
#include <iostream>

class Cuisson : public AbstractFactory
{
    public:
        Cuisson();
        virtual ~Cuisson();
        Vegetables* createVegetables()=0;
        Oil* createOils()=0;
        Herbs* createHerbes()=0;
        std::string getName();

    protected:
};

#endif // CUISSON_H
