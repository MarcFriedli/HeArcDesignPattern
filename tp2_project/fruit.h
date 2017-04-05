#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <iostream>


class Fruit
{
    public:
        Fruit(std::string _name, bool _pepin){name = _name; pepin = _pepin;}
        virtual ~Fruit(){};
        virtual std::string toString(){return name;};
        virtual bool contientPepin(){return pepin;};


    protected:

    private:
        std::string name;
        bool pepin;

};

#endif // FRUIT_H
