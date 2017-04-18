#ifndef ETATPAYEE_H
#define ETATPAYEE_H

#include "etats.h"
#include <iostream>

class EtatPayee : public Etat
{
    public:
        EtatPayee();
        virtual ~EtatPayee();
    protected:
        void doSomething();
    private:
};

#endif // ETATPAYEE_H
