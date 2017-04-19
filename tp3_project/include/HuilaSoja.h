#ifndef HUILASOJA_H
#define HUILASOJA_H
#include "Oil.h"
#include <iostream>


class HuilaSoja : public Oil
{
    public:
        HuilaSoja();
        virtual ~HuilaSoja();
        std::string getOil();

    protected:
};

#endif // HUILASOJA_H
