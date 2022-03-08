#include <iostream>

struct A
{
  int x;
  static int y;
  static void F()
  {
    std::cout << "Teste " << y << "\n"; 
  }
};

int A::y = 0;

int main()
{
  A obj1, obj2;
  obj1.F();
  obj1.y = 5;
  obj1.x = 1;
  obj2.x = 2;

  std::cout << obj1.x << " " << obj2.x << std::endl;
  std::cout << obj1.y << " " << obj2.y << std::endl;

  return(0);
}