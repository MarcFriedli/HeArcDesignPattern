#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <iostream>


class Fruit
{
    public:
        virtual ~Fruit(){};
        virtual std::string toString()=0;
        virtual bool contientPepin(){return pepin;}

    protected:
        std::string name;
        bool pepin;

};

#endif // FRUIT_H
