#include "etatattente.h"
#include "etatpayee.h"

EtatAttente::EtatAttente()
{
    //ctor
}

EtatAttente::~EtatAttente()
{
    //dtor
}

void EtatAttente::traiter(Commande *commande)
{
    commande->setEtat(new EtatPayee);
    commande->avancement();

}
