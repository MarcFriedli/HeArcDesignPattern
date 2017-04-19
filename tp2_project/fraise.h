#ifndef FRAISE_H
#define FRAISE_H

#include "fruit.h"


class Fraise:public Fruit
{
    public:
        Fraise();
        virtual ~Fraise();
        std::string toString();
        bool contientPepin();
    protected:
    private:
};

#endif // FRAISE_H
