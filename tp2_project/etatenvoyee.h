#ifndef ETATENVOYEE_H
#define ETATENVOYEE_H

#include "etats.h"
#include <iostream>


class EtatEnvoyee : public Etat
{
    public:
        EtatEnvoyee();
        virtual ~EtatEnvoyee();
    protected:
        void doSomething();
    private:
};

#endif // ETATENVOYEE_H
