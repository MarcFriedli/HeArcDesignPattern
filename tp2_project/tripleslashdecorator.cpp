#include "tripleslashdecorator.h"

TripleSlashDecorator::TripleSlashDecorator(Fruit fruit)
    :FruitDecorator(fruit)
{
    decorator[0]=decorator[1]=decorator[2]='/';
}


TripleSlashDecorator::~TripleSlashDecorator()
{
    //dtor
}
