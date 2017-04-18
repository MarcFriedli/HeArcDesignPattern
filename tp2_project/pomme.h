#ifndef POMME_H
#define POMME_H

#include "fruit.h"


class Pomme : public Fruit
{
    public:
        Pomme();
        ~Pomme();
        std::string toString();
        bool contientPepin();
    protected:
    private:
};

#endif // POMME_H
