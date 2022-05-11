#include <iostream>
#include <utility>

using namespace std;

template<typename _T1, typename _T2>
struct par
{
    T1 primeiro;
    T2 segundo;
};

int main()
{
    //par<int, int> p1 = par<int, int>::cria_par(10, 20);

    pair<string, int> p1 = {"Academy", 5};

    cout << p1.first << endl;
    cout << p1.second << endl;

    par<string, int> p2;

    p2.primeiro = "Neps";
    p2.segundo = 5;

    cout << p2.primeiro << endl;
    cout << p2.segundo << endl;
}