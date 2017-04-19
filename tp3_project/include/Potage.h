#ifndef POTAGE_H
#define POTAGE_H
#include "AbstractFactory.h"
#include <iostream>


class Potage : public AbstractFactory
{
    public:
        Potage();
        virtual ~Potage();
        std::string getName();

    protected:
};

#endif // POTAGE_H
