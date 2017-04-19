#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "Vegetables.h"
#include "Oil.h"
#include "Herbs.h"


class AbstractFactory
{
    public:
        virtual ~AbstractFactory(){};
        virtual Vegetables* createVegetables()=0;
        virtual Oil* createOils()=0;
        virtual Herbs* createHerbes()=0;
        virtual std::string getName()=0;

    protected:
        std::string name;
};

#endif // ABSTRACTFACTORY_H
