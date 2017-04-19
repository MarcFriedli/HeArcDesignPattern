#ifndef CUISSON_H
#define CUISSON_H
#include "AbstractFactory.h"
#include <iostream>

class Cuisson : public AbstractFactory
{
    public:
        Cuisson();
        virtual ~Cuisson();
        std::string getName();

    protected:
};

#endif // CUISSON_H
