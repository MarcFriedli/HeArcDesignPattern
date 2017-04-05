#ifndef BANANE_H
#define BANANE_H

#include "fruit.h"

#include <iostream>
#include <string>

class Banane : public Fruit
{
    public:
        Banane();
        virtual ~Banane();
        string toString();
        bool contientPepin();
    protected:
    private:
};

#endif // BANANE_H
