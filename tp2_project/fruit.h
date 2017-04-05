#ifndef FRUIT_H
#define FRUIT_H

#include <string>

using namespace std;

class Fruit
{
    public:
        Fruit();
        virtual ~Fruit();
        virtual string toString() = 0;
        virtual bool contientPepin() = 0;
    protected:
        string getName(){ return name;}
        void setName(string _name) {name = _name;}

        bool getPepin(){ return pepin;}
        void setPepin(bool _pepin) { pepin = _pepin;}

    private:
        string name;
        bool pepin;

};

#endif // FRUIT_H
