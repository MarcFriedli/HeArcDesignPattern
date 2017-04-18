#include <iostream>
#include <list>
#include "banane.h"
#include "pomme.h"
#include "fraise.h"
#include "fruit.h"

using namespace std;

int main()
{
    std::list<Fruit*> panier;
    panier.push_back(new Banane());
    panier.push_back(new Pomme());
    panier.push_back(new Fraise());
    panier.push_back(new Pomme());

    list<Fruit*>::iterator it;	//ou auto it = lst.begin()
    for (it = panier.begin(); it != panier.end(); it++)
        cout << (*it)->toString() << endl;

    return 0;
}
