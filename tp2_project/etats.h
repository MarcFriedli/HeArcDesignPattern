#ifndef ETATS_H
#define ETATS_H
#include "contexte.h"


class etat
{
    public:
        etat();
        void Action() { DoSomething(); }
        virtual ~etat();

    protected:
        virtual void DoSomething() = 0;

    private:

};

#endif // ETATS_H
