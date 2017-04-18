#include "sharpdecorator.h"

SharpDecorator::SharpDecorator(Fruit fruit)
    :FruitDecorator(fruit)
{
    decorator[0]='{';
    decorator[1]='|';
    decorator[2]='}';
}


SharpDecorator::~SharpDecorator()
{
    //dtor
}
