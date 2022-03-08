#include <iostream>
#include <string>

struct ClasseA
{
  int x;
  ClasseA()
  {
    x = 0;
  }

  ClasseA(int valor)
  {
    x = valor;
  }
};

int main()
{
  ClasseA objeto(9);
  std::cout << objeto.x << "\n";
  objeto = ClasseA(20);
  std::cout << objeto.x << "\n";
  objeto = ClasseA();
  std::cout << objeto.x << std::endl;
  return(0);
}