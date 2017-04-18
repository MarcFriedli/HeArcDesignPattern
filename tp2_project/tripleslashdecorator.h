#ifndef TRIPLESLASHDECORATOR_H
#define TRIPLESLASHDECORATOR_H

#include "fruitdecorator.h"

class TripleSlashDecorator: public FruitDecorator
{
    public:
        TripleSlashDecorator(Fruit *fruit);
        virtual ~TripleSlashDecorator();
    protected:
    private:
};

#endif // TRIPLESLASHDECORATOR_H
