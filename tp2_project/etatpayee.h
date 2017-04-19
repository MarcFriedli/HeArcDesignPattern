#ifndef ETATPAYEE_H
#define ETATPAYEE_H

#include "etats.h"
#include <iostream>
class Command;

class EtatPayee : public Etat
{
    public:
        EtatPayee();
        virtual ~EtatPayee();
    protected:
        void traiter(Commande *commande);
    private:
};

#endif // ETATPAYEE_H
