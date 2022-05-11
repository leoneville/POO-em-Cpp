#include <iostream>

using namespace std;

class Animal
{
    public:
        virtual void emitirsom()
        {
            cout << "Som do animal\n";
        }
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
    Animal animal;
    Gato cat;
    Cachorro dog;

    som(animal);
    som(cat);
    som(dog);

    // Animal *animal;

    // animal = new Gato();
    // animal->emitirsom();

    // animal = new Cachorro();
    // animal->emitirsom();
}