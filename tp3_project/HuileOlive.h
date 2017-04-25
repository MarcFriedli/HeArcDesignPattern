#ifndef HUILEOLIVE_H
#define HUILEOLIVE_H
#include "Oil.h"
#include <iostream>

class HuileOlive : public Oil
{
    public:
        HuileOlive();
        virtual ~HuileOlive();
        std::string getOil();

    protected:

    private:
};

#endif // HUILEOLIVE_H
