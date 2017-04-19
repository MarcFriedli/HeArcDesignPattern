#ifndef VEGETABLES_H
#define VEGETABLES_H
#include <iostream>

class Vegetables
{
    public:
        virtual ~Vegetables(){};
        virtual std::string getVegetable()=0;

    protected:
        std::string name;
};

#endif // VEGETABLES_H
