#ifndef SHARPDECORATOR_H
#define SHARPDECORATOR_H

#include "fruitdecorator.h"

class SharpDecorator : public FruitDecorator
{
    public:
        SharpDecorator(Fruit *fruit);
        virtual ~SharpDecorator();
    protected:
    private:
};

#endif // SHARPDECORATOR_H
