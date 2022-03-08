#include <cstdio>

class A
{
    int x;
    friend class B;
};

class B
{
    int x;

public:
    int qual(A);
};

int B::qual(A ob)
{
    return ob.x;
}

int main()
{
    A obA;
    B obB;
    printf("%d\n", obB.qual(obA));
}