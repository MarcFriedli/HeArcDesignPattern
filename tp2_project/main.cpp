#include <iostream>
#include <list>
#include "banane.h"
#include "pomme.h"
#include "fraise.h"
#include "fruit.h"
#include "sharpdecorator.h"
#include "singleslashdecorator.h"
#include "tripleslashdecorator.h"
#include "commande.h"

using namespace std;

std::list<Fruit*> panier;

void affichage()
{
    cout<<"Bienvenue"<<endl;
    cout<<"a) ajouter un fruit au panier"<<endl;
    cout<<"p) consulter le panier"<<endl;
    cout<<"c) passer commande"<<endl;
    cout<<"q) quitter"<<endl;
}

void decorerFruit(Fruit *fruit)
{
    int typeDeco=0;
    while(typeDeco<1 || typeDeco>4)
    {
        cout<<"1) {deco1}"<<endl;
        cout<<"2) <deco3>"<<endl;
        cout<<"3) /deco2/"<<endl;
        cout<<"4) pas de decoration"<<endl;
        cin>>typeDeco;
        switch(typeDeco)
        {
        case 1:
            panier.push_back(new SharpDecorator(fruit));
        break;
        case 2:
            panier.push_back(new SingleSlashDecorator(fruit));
        break;
        case 3:
            panier.push_back(new TripleSlashDecorator(fruit));
        break;
        case 4:
            panier.push_back(fruit);
        break;
        default :
            cout<<"Decoration inconnue"<<endl;
        break;
        }
    }
}

void ajouterPanier()
{
    Fruit *newFruit;
    char typeFruit;
    while(typeFruit!='b' && typeFruit!='f' && typeFruit!='p'){
        cout<<"b) ajouter une banane"<<endl;
        cout<<"f) ajouter une fraise"<<endl;
        cout<<"p) ajouter une pomme"<<endl;
        cin>>typeFruit;
        switch(typeFruit)
        {
        case 'b' :
            newFruit = new Banane();
        break;
        case 'f' :
            newFruit = new Fraise();
        break;
        case 'p' :
            newFruit = new Pomme();
        break;
        default :
            cout<<"Fruit inconnu !"<<endl;
        break;
        }
    }
    decorerFruit(newFruit);
}

void afficherPanier()
{
    if(panier.empty())
    {
        cout<<"Votre panier est actuellement vide !"<<endl;
    }
    list<Fruit*>::iterator it;	//ou auto it = lst.begin()
    for (it = panier.begin(); it != panier.end(); it++)
        cout << (*it)->toString() << endl;
}

void passerCommande()
{
    Commande *com = new Commande();
    panier.clear();
}

int main()
{
    char operation;
    while(operation!='q')
    {
        affichage();
        cin>>operation;
        switch(operation)
        {
        case 'a':
            ajouterPanier();
        break;
        case 'c' :
            passerCommande();
        break;
        case 'p' :
            afficherPanier();
        break;
        case 'q' :
            cout<<"Au revoir"<<endl;
        break;
        default :
            cout<<"Action inconnue"<<endl;
        break;
        }
        cout<<"-----------------------------------------"<<endl;
    }
    return 0;
}
