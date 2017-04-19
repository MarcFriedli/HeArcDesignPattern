#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H


class AbstractFactory
{
    public:
        virtual ~AbstractFactory(){};
        virtual void createVegetables()=0;
        virtual void createOils()=0;
        virtual void createHerbes()=0;
        virtual std::string getName()=0;

    protected:
        std::string name;
};

#endif // ABSTRACTFACTORY_H
