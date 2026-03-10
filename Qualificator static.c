#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contador() {
    static int count = 0; // Inicializado apenas uma vez
    count++;
    return count;
}
// Chamar contador() 3 vezes imprimirá: 1 2 3

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "pt-br");

    printf("Chamando contador pela primeira vez...\t%d\n", contador());
    printf("Chamando contador pela segunda vez...\t%d\n", contador());
    printf("Chamando contador pela terceira vez...\t%d\n", contador());
    printf("Chamando contador pela quarta vez...\t%d\n", contador());
    printf("Chamando contador pela quinta vez...\t%d\n", contador());
    printf("Chamando contador pela sexta vez...\t%d\n", contador());

    return 0;
}