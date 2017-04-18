#ifndef ETATATTENTE_H
#define ETATATTENTE_H

#include "etats.h"
#include <iostream>


class EtatAttente : public Etat
{
    public:
        EtatAttente();
        virtual ~EtatAttente();
    protected:
        void doSomething();
    private:
};

#endif // ETATATTENTE_H
