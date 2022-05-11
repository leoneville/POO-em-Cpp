#include <iostream>
#include <stdio.h>

namespace lnv
{
    class Saida
    {
        public:
            Saida operator << (const char *s)
            {
                printf("%s", s);
            }

            Saida operator << (int x)
            {
                printf("%d", x);
            }
            Saida operator << (std::string s)
            {
                printf("%s", s);
            }
    } nout;

    class Entrada
    {
        public:
            Entrada operator >> (int &x)
            {
                scanf("%d", &x);
            }
    } nin;
}

int main()
{
    int a;
    std::string b;
    lnv::nin >> a;

    lnv::nout << a;

    return 0;
}