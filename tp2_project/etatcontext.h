#ifndef ETATCONTEXT_H
#define ETATCONTEXT_H

#include "etatattente.h"
#include "etatpayee.h"
#include "etatenvoyee.h"
#include "etats.h"

class EtatContext
{
    public:
        EtatContext();
        virtual ~EtatContext();
        void commande();
    protected:
    private:
        Etat *etatActuel[3] = {new EtatAttente, new EtatEnvoyee, new EtatPayee};

};

#endif // ETATCONTEXT_H
