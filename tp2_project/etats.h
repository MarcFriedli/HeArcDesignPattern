#ifndef ETATS_H
#define ETATS_H

#include "commande.h"

class Etat
{
    public:
        virtual ~Etat(){};
        virtual void traiter(Commande *commande) = 0;
    private:

};

#endif // ETATS_H
