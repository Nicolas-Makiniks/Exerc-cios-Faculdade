#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    O enum (enumeração) em C é um tipo de dado definido pelo usuário
    que agrupa um conjunto de constantes inteiras nomeadas,
    melhorando a legibilidade do código e facilitando a manutenção.

    Ele atribui automaticamente valores inteiros sequenciais (começando em 0)
    a identificadores, permitindo usar nomes simbólicos em vez de números brutos,
    mas para alterar este valor basta atribuir diretamente a constatne.
    Exemplo:
*/

// Definindo o enum
enum DiasDaSemana {
    DOMINGO = 1,        // 1
    SEGUNDA,            // 2
    TERCA,              // 3
    QUARTA,             // 4
    QUINTA,             // 5
    SEXTA,              // 6
    SABADO,             // 7
    Tabulacao = '\t',   // 9
    QuebraLinha = '\n'  // 10
};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "pt-br");

    enum DiasDaSemana s1, s2, s3;
    s1 = SEGUNDA;
    s2 = 5;

    printf("Valor de s1: %d\n", s1);
    printf("Valor de s2: %d\n\n", s2);

    s3 = QuebraLinha;

    switch (s3) {
    case 1:
        printf("Hoje é Domingo, valor %d.\n", s3);
        break;
    case 2:
        printf("Hoje é Segunda, valor %d.\n", s3);
        break;
    case 3:
        printf("Hoje é Terça, valor %d.\n", s3);
        break;
    case 4:
        printf("Hoje é Quarta, valor %d.\n", s3);
        break;
    case 5:
        printf("Hoje é Quinta, valor %d.\n", s3);
        break;
    case 6:
        printf("Hoje é Sexta, valor %d.\n", s3);
        break;
    case 7:
        printf("Hoje é Sábado, valor %d.\n", s3);
        break;
    case 9:
        printf("Este é %c a tabulação %c para espaçamento, valor %d.\n", s3, s3, s3);
        break;
    case 10:
        printf("Este é a %c quebra de linha %c o mesmo que \\n, valor %d.\n", s3, s3, s3);
        break;
    }

    system("pause");

    return 0;
}
