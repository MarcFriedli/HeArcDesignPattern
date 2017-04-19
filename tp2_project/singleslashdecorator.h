#ifndef SINGLESLASHDECORATOR_H
#define SINGLESLASHDECORATOR_H

#include "fruitdecorator.h"


class SingleSlashDecorator: public FruitDecorator
{
    public:
        SingleSlashDecorator(Fruit *fruit);
        virtual ~SingleSlashDecorator();
    protected:
    private:
};

#endif // SINGLESLASHDECORATOR_H
