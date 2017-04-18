#ifndef ETAT_ATTENTE_H
#define ETAT_ATTENTE_H
#include "etats.h"
#include <iostream>


class etat_attente : public etat
{
    public:
        etat_attente();
        DoSomething() {cout << "état : en attente..." << endl;}
        virtual ~etat_attente();

    protected:

    private:
};

#endif // ETAT_ATTENTE_H
