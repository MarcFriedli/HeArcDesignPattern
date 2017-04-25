#ifndef OIL_H
#define OIL_H
#include <iostream>

class Oil
{
    public:
        virtual ~Oil(){};
        virtual std::string getOil()=0;

    protected:
        std::string name;
};

#endif // OIL_H
