#include <iostream>

struct Aluno
{
  char nome[50];

  void falar()
  {
    std::cout << "Eu me chamo " << nome << "\n";
  }
};

int main()
{
  Aluno x = {"Neville"}, y = {"Lais"};

  x.falar();
  y.falar();

  return(0);
}