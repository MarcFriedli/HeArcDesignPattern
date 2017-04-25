#ifndef SALADE_H
#define SALADE_H
#include "AbstractFactory.h"
#include <iostream>

class Salade : public AbstractFactory
{
public:
    Salade();
    virtual ~Salade();
    std::string getName();
    Vegetables* createVegetables();
    Oil* createOils();
    Herbs* createHerbes();
};

#endif // SALADE_H
