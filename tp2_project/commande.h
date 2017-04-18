#ifndef COMMANDE_H
#define COMMANDE_H


class State
{
    public:
        State();
        void traiter() { DoSomething(); };
        virtual ~State();

    protected:

    private:
        int state;
};

#endif // COMMANDE_H
