#include <iostream>

using namespace std;

template<class tipo>
void trocar( tipo &a, tipo &b)
{
    tipo temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    trocar(a, b);
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
}