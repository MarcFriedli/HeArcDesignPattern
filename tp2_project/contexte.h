#ifndef CONTEXTE_H
#define CONTEXTE_H
#include "etats.h"


class contexte
{
    public:
        contexte():etat(new etat_attente){}
        void setState(etat *s) {etat = s;}
        virtual ~contexte();

    protected:

    private:
        int etat;
};

#endif // CONTEXTE_H
