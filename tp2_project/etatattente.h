#ifndef ETATATTENTE_H
#define ETATATTENTE_H

#include "etats.h"
#include <iostream>
#include "commande.h"

class EtatAttente : public Etat
{
    public:
        EtatAttente();
        virtual ~EtatAttente();
    protected:
        void traiter(Commande *commande);
    private:
};

#endif // ETATATTENTE_H
