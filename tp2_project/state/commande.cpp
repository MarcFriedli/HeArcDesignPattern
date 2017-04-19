#include "commande.h"
#include "etatattente.h"

Commande::Commande()
{
    etatActuel= new EtatAttente();
    avancement();
}

Commande::~Commande()
{
    //dtor
}

void Commande::setEtat(Etat *nouvelEtat)
{
    etatActuel=nouvelEtat;
}

void Commande::avancement()
{
    etatActuel->traiter(this);
}
