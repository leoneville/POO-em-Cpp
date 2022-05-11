#include <iostream>

using namespace std;

template<typename Tipo> void troca(Tipo &n1, Tipo &n2)
{
    Tipo aux = n1;
    n1 = n2;
    n2 = aux;
}

int main()
{
    int a = 1, b = 2;
    double c = 3.3, d = 4.4;
    char e = 'e', f = 'f';
    string g = "Gato", h = "Helicoptero";
    bool i = true, j = false;

    cout << "a = " << a << "   \t b = " << b << endl;
    cout << "c = " << c << " \t d = " << d << endl;
    cout << "e = " << e << "   \t f = " << f << endl;
    cout << "g = " << g << " \t h = " << h << endl;
    cout << "i = " << i << "   \t j = " << j << endl << endl << endl;

    troca(a, b);
    troca(c, d);
    troca(e, f);
    troca(g, h);
    troca(i, j);

    cout << "a = " << a << "   \t b = " << b << endl;
    cout << "c = " << c << " \t d = " << d << endl;
    cout << "e = " << e << "   \t f = " << f << endl;
    cout << "g = " << g << " \t h = " << h << endl;
    cout << "i = " << i << "   \t j = " << j << endl;
}