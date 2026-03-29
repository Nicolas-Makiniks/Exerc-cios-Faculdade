#include <iostream>

/*
    1) Escreva um programa em C++ que:
        a. Declare uma variável inteira e armazene um valor nela.
        b. Declare um ponteiro para armazenar o endereço dessa variável.
        c. Use o ponteiro para modificar o valor da variável.
        d. Imprima na tela o valor da variável antes e depois da modificação.
*/

int main() {
    int minhaVariavel = 15;

    std::cout << "Valor da variavel ANTES da modificação: " << minhaVariavel << std::endl;

    int *ponteiro = &minhaVariavel;
    *ponteiro = 42;

    std::cout << "Valor da variavel DEPOIS da modificacao: " << minhaVariavel << std::endl;

    return 0;
}