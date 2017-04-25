#ifndef HERBS_H
#define HERBS_H
#include <iostream>

class Herbs
{
    public:
        virtual ~Herbs(){};
        virtual std::string getHerbs()=0;

    protected:
        std::string name;
};

#endif // HERBS_H
