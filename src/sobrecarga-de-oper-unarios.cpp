#include <iostream>

class A
{
    public:
        int x, y;

        A()
        {
            x = 0;
            y = 0;
        }

        A(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        A operator+ (A a)
        {
            return A(x+a.x, y+a.y);
        }

        A operator+ (int a)
        {
            return A(x+a, y+a);
        }

        A operator- ()
        {
            return A(-x, -y);
        }

        A operator++ ()
        {
            x++;
            y++;
            return *this;
        }

        A operator++ (int)
        {
            x++;
            y++;
            return *this;
        }
};

A soma(A a, A b)
{
    return A(a.x + b.x, a.y + b.y);
}

int main()
{
    A a(1,2), b(3,4);
    A c = a++;
    std::cout << a.x << a.y << std::endl;
    std::cout << c.x << c.y << std::endl;
}