#include "fruitdecorator.h"

FruitDecorator::FruitDecorator(Fruit _fruit)
{
    fruit = _fruit;
}

FruitDecorator::~FruitDecorator()
{
    //dtor
}

FruitDecorator::toString()
{
    std::cout<<decorator[0]<<fruit.toString()<<decorator[1]<<(fruit.contientPepin())?"Avec":"Sans"<<" pépin."<<decorator[3]<<std::endl;
}
