#include<iostream>

template<typename tipo1, class tipo2>
class Par
{
    public:
        tipo1 primeiro;
        tipo2 segundo;
};

template<class t1, class t2>
int um(t1 x, t2 y)
{
    return 1;
}

int main()
{
    Par<int, char> p1;
    Par<int, double> p2;
    Par<char, char> p3;
    um('a', 5);
}