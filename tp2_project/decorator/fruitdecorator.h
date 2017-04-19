#ifndef FRUITDECORATOR_H
#define FRUITDECORATOR_H

#include "../Composite/fruit.h"
#include <iostream>

class FruitDecorator : public Fruit
{
    public:
        FruitDecorator(Fruit *_fruit);
        virtual ~FruitDecorator();
        std::string toString();
    protected:
        Fruit *fruit;
        char decorator[3];
    private:
};

#endif // FRUITDECORATOR_H
