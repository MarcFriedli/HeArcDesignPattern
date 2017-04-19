#ifndef ETATENVOYEE_H
#define ETATENVOYEE_H

#include "etats.h"
#include <iostream>
#include "commande.h"

class EtatEnvoyee : public Etat
{
    public:
        EtatEnvoyee();
        virtual ~EtatEnvoyee();
    protected:
        void traiter(Commande *commande);
    private:
};

#endif // ETATENVOYEE_H
