// Dada uma string de caracteres, como encontrar o primeiro caracter único (que nao se repete) na string? Input: ibminterviewibm Output: n

#include <iostream>

using namespace std;

int main()
{
    string palavra = "ibminterviewibm";
    int contador = 0, tam = palavra.length();

    for (int i = 0; i < tam; i++)
    {
        contador = 0;
        for (int j = 0; j < tam; j++)
        {
            if (palavra[i] == palavra[j])
            {
                contador++;
            }

            if (contador > 1)
            {
                break;
            }
        }

        if (contador == 1)
        {
            cout << palavra[i] << endl;
            break;
        }
    }
}