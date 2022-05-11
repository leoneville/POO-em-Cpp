#include <stdio.h>

struct Area
{
    int largura;
    int comprimento;

    int calculaArea()
    {
        return this->comprimento*this->largura;
    }
};

int main()
{

    Area area1, area2;

    scanf("%d %d %d %d", &area1.comprimento, &area1.largura, &area2.comprimento, &area2.largura);

    int Area1 = area1.calculaArea();
    int Area2 = area2.calculaArea();

    if (Area1 > Area2)
    {
        printf("%d", Area1);
    }
    else
    {
        printf("%d", Area2);
    }

    return 0;
}