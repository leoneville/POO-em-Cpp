#include <iostream>
#include <string>
#include <cstdlib>

struct ClasseA
{
  int *p;
  ~ClasseA()
  {
    free(p);
    std::cout << "Morreu\n";
  }
};

int main()
{
  ClasseA objeto;
  objeto.p = (int*)malloc(sizeof(int)*9);
  std::cout << "Vai acabar\n";
  return(0);
}