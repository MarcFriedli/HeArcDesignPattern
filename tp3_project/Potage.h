#ifndef POTAGE_H
#define POTAGE_H
#include "AbstractFactory.h"
#include <iostream>
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"


class Potage : public AbstractFactory
{
public:
    Potage();
    virtual ~Potage();
    std::string getName();
    Vegetables* createVegetables();
    Oil* createOils();
    Herbs* createHerbes();

protected:
};

#endif // POTAGE_H
