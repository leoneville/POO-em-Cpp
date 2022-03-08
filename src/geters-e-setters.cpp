#include <cstdio>

class humano {
    int idade;

public:
    humano() {
        this->idade = 0;
    }
    int get_idade() { return idade; }
    void set_idade(int idade) {
        if (idade >= 0 && idade <= 120) { this->idade = idade; }
    }
};

int main() {
    humano maluco;
    printf("%d\n", maluco.get_idade());
    maluco.set_idade(30);
    printf("%d\n", maluco.get_idade());
    maluco.set_idade(-30);
    printf("%d\n", maluco.get_idade());
}