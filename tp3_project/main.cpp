#include <iostream>
#include "Menu.h"
#include "Vapeur.h"
#include "Potage.h"
#include "Cuisson.h"
#include "Salade.h"

using std::cout;
using std::endl;

int main() {
    Menu *menuVapeur = new Menu(new Vapeur());
    Menu *menuPotage = new Menu(new Potage());
    Menu *menuCuisson = new Menu(new Cuisson());
    Menu *menuSalade = new Menu(new Salade());


    char action;
    while(action!='q' && action!='Q')
    {
        cout<<"Quel menu voulez-vous commander?"<<endl;
        cout<<"a: vapeur"<<endl;
        cout<<"b: potage"<<endl;
        cout<<"c: cuisson"<<endl;
        cout<<"d: salade"<<endl;
        cout<<"q: quitter le resto"<<endl;
        std::cin>>action;

        switch(action)
        {
            case 'a':
            case 'A':
                menuVapeur->showMenu();
                break;
            case 'b' :
            case 'B':
                menuPotage->showMenu();
                break;
            case 'c':
            case 'C':
                menuCuisson->showMenu();
                break;
            case 'd':
            case 'D':
                menuSalade->showMenu();
                break;
            case 'q':
            case 'Q':
                cout<<"Au revoir !"<<endl;
                break;
            default:
                cout<<"Action inconnue !"<<endl;
                break;
        }
        cout<<"----------------------------------------------------------------"<<endl;
    }
    return 0;
}