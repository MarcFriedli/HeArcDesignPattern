#ifndef VAPEUR_H
#define VAPEUR_H
#include "AbstractFactory.h"
#include <iostream>


class Vapeur : public AbstractFactory
{
    public:
        Vapeur();
        virtual ~Vapeur();
        std::string getName();

    protected:

    private:
};

#endif // VAPEUR_H
