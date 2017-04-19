#include "etatenvoyee.h"

EtatEnvoyee::EtatEnvoyee()
{
    //ctor
}

EtatEnvoyee::~EtatEnvoyee()
{
    //dtor
}

void EtatEnvoyee::traiter(Commande *commande)
{
    std::cout<<"SENT"<<std::endl;
    delete commande;
}
