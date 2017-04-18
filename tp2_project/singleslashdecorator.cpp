#include "singleslashdecorator.h"

SingleSlashDecorator::SingleSlashDecorator(Fruit fruit)
    :FruitDecorator(fruit)
{
    decorator[0]='<';
    decorator[1]='/';
    decorator[2]='>';
}

SingleSlashDecorator::~SingleSlashDecorator()
{
    //dtor
}
