#ifndef VAPEUR_H
#define VAPEUR_H
#include "AbstractFactory.h"
#include <iostream>
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"

class Vapeur : public AbstractFactory
{
public:
    Vapeur();
    virtual ~Vapeur();
    std::string getName();
    Vegetables* createVegetables();
    Oil* createOils();
    Herbs* createHerbes();
};

#endif // VAPEUR_H
