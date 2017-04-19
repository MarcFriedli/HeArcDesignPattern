#include "etatpayee.h"
#include "etatenvoyee.h"

EtatPayee::EtatPayee()
{
    //ctor
}

EtatPayee::~EtatPayee()
{
    //dtor
}

void EtatPayee::traiter(Commande *commande)
{
    std::cout<<"DONE"<<std::endl;
    commande->setEtat(new EtatEnvoyee);
    commande->avancement();
}
