#ifndef ORIGAN_H
#define ORIGAN_H
#include "Herbs.h"
#include <iostream>


class Origan : public Herbs
{
    public:
        Origan();
        virtual ~Origan();
        std::string getHerbs();

    protected:
};

#endif // ORIGAN_H
