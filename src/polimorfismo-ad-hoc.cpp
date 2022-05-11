#include <iostream>

using namespace std;

class A
{
    public:
        int soma(int a, int b)
        {
            return a + b;
        }
        int soma(int a, int b, int c)
        {
            return a + b + c;
        }
        int soma(int a, int b, double c)
        {
            return a+b+c+50;
        }
};

int main()
{
    A objeto;
    cout << objeto.soma(5, 7) << "\n";
    cout << objeto.soma(4, 8, 10) << "\n";
    cout << objeto.soma(4, 8, (double)10) << endl;

}