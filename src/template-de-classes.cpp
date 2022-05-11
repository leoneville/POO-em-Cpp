#include <iostream>

using namespace std;

template<typename tipo>
class Classe
{
    public:
        int x;
        double y;
        char z;
        tipo tipoGenerico;
};

int main()
{
    Classe<int> objeto01;
    objeto01.tipoGenerico = 5;
    cout << objeto01.tipoGenerico << endl;

    Classe<int> objeto02;
    objeto02.tipoGenerico = 7.7777;
    cout << objeto02.tipoGenerico << endl;
}