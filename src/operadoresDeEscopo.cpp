#include <iostream>

struct teste
{
  int soma(int, int);
  void imprime();
};

void teste::imprime()
{
  std::cout << "Teste\n";
}

int x = 1;
int main()
{
  teste y;
  int x = 2;
  std::cout << x << " " << ::x << std::endl;
  y.imprime();
}