#include <iostream>

using namespace std;

template< typename X >
X soma(X a, X b)
{
    return a + b;
}

template< class Generic > Generic Maior(Generic x, Generic y)
{
    return (x > y) ? x : y;
}

int main()
{
    int i1 = 4, i2 = 5;
    cout << soma(i1, i2) << endl;

    double d1 = 1.33, d2 = 5.66;
    cout << soma(d1, d2) << endl;
}