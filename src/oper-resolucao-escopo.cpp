#include <cstdio>

using namespace std;

class A 
{
    private:
        int privado;
    protected:
        int protegido;
    public:
        int publico;
        int get_privado_A()
        {
            return privado;
        }
        A()
        {
            this->publico = 1;
            this->protegido = 2;
            this->privado = 3;
        }
};

class B : private A
{
    public:
        int publico;

        B()
        {
            this->publico = 4;
        }

        int get_publico()
        {
            return this->A::publico;
        }
        int get_protegido()
        {
            return this->A::protegido;
        }
        int get_privado_B()
        {
            return this->get_privado_A();
        }
};

int main()
{
    B objeto;
    printf("%d\n", objeto.get_publico());
    printf("%d\n", objeto.get_protegido());
    printf("%d\n", objeto.get_privado_B());
}