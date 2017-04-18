#include"fruitdecorator.h"

#include<list>

using std::string;

FruitDecorator::FruitDecorator(Fruit *_fruit)
{
    fruit=_fruit;
}

FruitDecorator::~FruitDecorator()
{
    //dtor
}

string FruitDecorator::toString()
{
    string bigString="";
    bigString+=decorator[0];
    bigString+=fruit->toString();
    bigString+=decorator[1];
    bigString+=(fruit->contientPepin()?"Avec":"Sans");
    bigString+=" pépin";
    bigString+=decorator[2];
    return bigString;
}
