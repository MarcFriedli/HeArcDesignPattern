#ifndef BANANE_H
#define BANANE_H

#include "fruit.h"
#include <iostream>

class Banane : public Fruit
{
    public:
        Banane();
        ~Banane();
        std::string toString();
        bool contientPepin();
    protected:
    private:
};

#endif // BANANE_H
