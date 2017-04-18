#ifndef ETATS_H
#define ETATS_H


class Etat
{
    public:
        Etat();
        void action() { doSomething(); }
        virtual ~Etat();

    protected:
        virtual void doSomething() = 0;

    private:

};

#endif // ETATS_H
