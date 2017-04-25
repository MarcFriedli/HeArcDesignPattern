#ifndef PERSIL_H
#define PERSIL_H
#include "Herbs.h"
#include <iostream>


class Persil : public Herbs
{
    public:
        Persil();
        virtual ~Persil();
        std::string getHerbs();

    protected:
};

#endif // PERSIL_H
