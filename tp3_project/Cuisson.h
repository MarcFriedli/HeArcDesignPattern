#ifndef CUISSON_H
#define CUISSON_H
#include "AbstractFactory.h"
#include <iostream>
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"

class Cuisson : public AbstractFactory
{
    public:
        Cuisson();
        virtual ~Cuisson();
        Vegetables* createVegetables();
        Oil* createOils();
        Herbs* createHerbes();
        std::string getName();

    protected:
};

#endif // CUISSON_H
