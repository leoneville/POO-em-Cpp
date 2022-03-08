#include <stdio.h>

//struct por padrão vem a visibilidade public ja a classe
//por padrao vem a visibilidade private

class A {
private:
    int a;

public:
    int valor() {
        return this->a;
    }

    void altera(int x) {
        this->a = x;
    }
};

int main() {
    A x;
    x.altera(7);
    printf("%d\n", x.valor());
}