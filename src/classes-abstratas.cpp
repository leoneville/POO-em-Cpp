#include <iostream>

using namespace std;

class Animal
{
    public:
        virtual void emitirsom() = 0;
};

class Gato : public Animal
{
    public:
        void emitirsom()
        {
            cout << "Som do gato\n";
        }
};

class Cachorro : public Animal
{
    public:
        void emitirsom()
        {
            cout << "Som do cachorro\n";
        }
};

void som(Animal &objeto)
{
    objeto.emitirsom();
}

int main()
{
    Gato cat;
    Animal *ponteiro = &cat;
    ponteiro->emitirsom();
}