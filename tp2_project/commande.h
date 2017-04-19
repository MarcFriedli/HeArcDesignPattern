#ifndef COMMANDE_H
#define COMMANDE_H

class Etat;

class Commande
{
    public:
        Commande();
        virtual ~Commande();
        void setEtat(Etat *nouvelEtat);
        void avancement();
    protected:
        Etat *etatActuel;
    private:
};

#endif // COMMANDE_H
