#include <iostream>
#include <string>

struct A
{
  std::string nome;
  int x;
  A()
  {
    x = 20;
    std::cout << "Construiu um objeto \n";
  }
};

int main()
{
  A objeto1, objeto2, objeto3;

  std::cout << objeto1.x << "\n" << objeto2.x << "\n" << objeto3.x << "\n\n";

  std::cout << objeto1.x << "\n";
  objeto1.x = 10;
  std::cout << objeto1.x << "\n";
  objeto1 = A();
  std::cout << objeto1.x << "\n";
  

  return(0);
}